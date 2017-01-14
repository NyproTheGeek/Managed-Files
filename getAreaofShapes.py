# 03/01/17
from sys import stdout
from math import pi
def area():
	while True:
		shape = input("Enter a shape ('sq' for square, 'rec' for rectangle and 'cir' for circle, 'ex' to exit): ").lower().strip()
		if shape == 'rec':
			length = int(input('Enter length: '))
			breadth = int(input('Enter breadth: '))
			drawRec(length, breadth)
			print('\nArea of Rectangle: {}\n\n'.format(length*breadth))
		elif shape == 'sq':
			length = int(input('Enter length: '))
			drawSq(length)
			print('\nArea of Square: {}\n\n'.format(length**2))
		elif shape == 'cir':
			radius = int(input('Enter radius: '))
			print('[Diagram missing]')
			print('\nArea of Circle: {}\n\n'.format(pi * radius**2))
		elif shape == 'ex':
			break
		else:
			print('Gimme the correct input idiot!\n\n')

def drawSq(length):
	print(' ', '_ ' * length)
	for i in range(length): print('|', '  ' * length, '\b\b|')
	print('|', '_ ' * length, '|')

def drawRec(length, breadth):
	print(' ', '_ ' * breadth)
	for i in range(length): print('|', '  ' * breadth, '\b\b|')
	print('|', '_ ' * breadth, '\b\b|')

area()
