import binascii

result = ""
filename = "te_data_sign_mag"
with open(filename+".hex") as file:
    i = 0
    for line in file:
        hexString = line[4:]

        # print (hexString)
        # print ('{:016b}'.format(int(hexString, 16)))
        result += "(\'" + '{:016b}'.format(int(hexString, 16))[0] + "\', \"" + '{:016b}'.format(int(hexString, 16))[1:] + "\"),"
        i = i +1
        if i%62==0:
            result = result[:-1]
            #bias
            #result += "(\'0\',\"000000001000000\")"
            result += "\n ------------------------------- \n"

with open(filename+".txt", "w") as f2:
    f2.write(result)





