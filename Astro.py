# 30/11/16
import sys
def genJumpTable():
    types = [
    "BL", "I8", "U8", "I16", "U16", "I32", "U32", "I64", "U64", "INT", "UINT", "F32", "F64",
    ]
    primInstrs = [
    "MOV_R", "MOV_V", "ADD", "SUB", "MUL", "DIV", "MOD", "EXP", 'INCR', "DECR", "STEP", "POW", "ROOT", "UNM", "EQ", "LT", "LE",
    # BOOLEANS ONLY
    "AND", "OR",
    # INTEGERS ONLY
    "BAND", "BOR", "BNOT", "BXOR", "SHL", "SHR",
    ]

    with open("C:\\Users\\Nypro\\Desktop\\jmptable.txt", 'w+') as f:
    # with open("/sdcard/syscool/code/jmptable.txt", 'w+') as f:
        # MOV_R, MOV_V
        f.write('{\n\t')
        for i in range(2):
            f.write('// ' + primInstrs[i] + '\n\t')
            for typ in types:
                f.write('&&' + typ + '_' + primInstrs[i] + ', ')
            f.write('\n\t')
        # ADD to UNM
        for i in range(2, 14):
            f.write('// ' + primInstrs[i] + '\n\t')
            for typ in range(1, 13):
                f.write('&&' + types[typ] + '_' + primInstrs[i] + ', ')
            f.write('\n\t')
        # EQ
        for i in range(14, 15):
            f.write('// ' + primInstrs[i] + '\n\t')
            for typ in types:
                f.write('&&' + typ + '_' + primInstrs[i] + ', ')
            f.write('\n\t')
        # LT, LE
        for i in range(15, 17):
            f.write('// ' + primInstrs[i] + '\n\t')
            for typ in range(1, 13):
                f.write('&&' + types[typ] + '_' + primInstrs[i] + ', ')
            f.write('\n\t')
        # AND, OR
        for i in range(17, 19):
            f.write('// ' + primInstrs[i] + '\n\t')
            for typ in range(1):
                f.write('&&' + types[typ] + '_' + primInstrs[i] + ', ')
            f.write('\n\t')
        # BAND to SHR
        for i in range(19, 25):
            f.write('// ' + primInstrs[i] + '\n\t')
            for typ in range(1, 11):
                f.write('&&' + types[typ] + '_' + primInstrs[i] + ', ')
            f.write('\n\t')
        # CAST
        f.write('// CASTS \n\t')
        for i in types:
            for j in types:
                if i != j:
                    f.write('&&' + i + '_TO_' + j + ', ')
            f.write('\n\t')
        f.write('\n}')

        # ----------------LABELS-----------------

        # MOV_R, MOV_V
        f.write('\n{\n\t')
        for i in range(2):
            f.write('// ' + primInstrs[i])
            for typ in types:
                f.write('\n\t'+ typ + '_' + primInstrs[i] + ':{}')
            f.write('\n\t')
        # ADD to UNM
        for i in range(2, 14):
            f.write('// ' + primInstrs[i])
            for typ in range(1, 13):
                f.write('\n\t'+ types[typ] + '_' + primInstrs[i] + ':{}')
            f.write('\n\t')
        # EQ
        for i in range(14, 15):
            f.write('// ' + primInstrs[i])
            for typ in types:
                f.write('\n\t'+ typ + '_' + primInstrs[i] + ':{}')
            f.write('\n\t')
        # LT, LE
        for i in range(15, 17):
            f.write('// ' + primInstrs[i])
            for typ in range(1, 13):
                f.write('\n\t'+ types[typ] + '_' + primInstrs[i] + ':{}')
            f.write('\n\t')
        # AND, OR
        for i in range(17, 19):
            f.write('// ' + primInstrs[i])
            for typ in range(1):
                f.write('\n\t'+ types[typ] + '_' + primInstrs[i] + ':{}')
            f.write('\n\t')
        # BAND to SHR
        for i in range(19, 25):
            f.write('// ' + primInstrs[i])
            for typ in range(1, 11):
                f.write('\n\t'+ types[typ] + '_' + primInstrs[i] + ':{}')
            f.write('\n\t')
        # CAST
        f.write('// CASTS \n\t')
        for i in types:
            f.write('// ' + i)
            for j in types:
                if i != j:
                    f.write('\n\t'+ i + '_TO_' + j + ':{}')
            f.write('\n\t')
        f.write('\n}')

genJumpTable()

# 29/11/16
def test():
    while True:
        print('\nEnter a valid number!')
        if int(input()) % 2:
            print('It is an odd number!')
        else:
            print('It is an even number!')


# test()
