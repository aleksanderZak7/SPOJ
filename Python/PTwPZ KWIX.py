import re
import sys

def print_indent(depth):
    print(" " * (depth * 4), end="")

def xml_to_kwix(xml_lines):
    tag_regex = re.compile(r"<(\w+)([^>]*)>")
    attr_regex = re.compile(r'(\w+)="([^"]*)"')
    depth = 0
    for line in xml_lines:
        matches = tag_regex.finditer(line)
        for match in matches:
            tag_name = match.group(1)
            attributes = match.group(2)
            print_indent(depth)
            print(f"{tag_name}:")
            depth += 1
            attr_matches = attr_regex.finditer(attributes)
            for attr_match in attr_matches:
                print_indent(depth)
                print(f"{attr_match.group(1)} = {attr_match.group(2)}")
            if f"</{tag_name}>" in line:
                depth -= 1

xml_to_kwix(sys.stdin.read().splitlines())