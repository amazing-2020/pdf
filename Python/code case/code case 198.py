import re

pattern = re.compile(r'\d+')
result1 = pattern.findall('runoob 123 google 456')
result2 = pattern.findall('run88ob123google456', 0, 10)

print(result1)
print(result2)

it = re.finditer(r"\d+", "12a32bc43jf3")
for match in it:
    print(match.group())
