def replace_all(text, dic):
    for i, j in dic.iteritems():
        text = text.replace(i, j)
    return text
	
def bf_to_ternary(text):
	text = replace_all(text, {'0': '', '1': '', '2': ''})
	return replace_all(text, {'<':'00', '>':'01', '-': '10', '+': '11', '.': '20', ',': '21', '[': '02', ']': '12'})

if __name__ == '__main__':
	from sys import argv
	
	if len(argv) != 2:
		print 'Usage: %s file' % (argv[0])
	else:
		with open(argv[1], 'r') as content_file:
			print bf_to_ternary(content_file.read())
