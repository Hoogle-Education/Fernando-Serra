import sys
sys.stdout.reconfigure(encoding='utf-8')

utf32_values = []

with open('out.txt', 'r') as f:
    line = f.readline()
    while line:
        values = line.strip().split()
        for value in values:
            utf32_values.append(int(value))
        line = f.readline()

utf32_chars = [chr(value) for value in utf32_values]
utf32_string = ''.join(utf32_chars)

print(utf32_string)
