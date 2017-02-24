# ASTS
# 17/01/17
class Expression:
    def __init__(self):
        pass

class TypeDefinition(Expression):
    def __init__(self, abstract, access, name, baseTypes, body):
        self.abstract = abstract
        self.access = access
        self.name = name
        self.baseTypes = baseTypes
        self.body = body

class GlobalTypeExtension(Expression):
    def __init__(self, access, name, baseTypes, body):
        self.access = access
        self.name = name
        self.baseTypes = baseTypes
        self.body = body

class LocalTypeExtension(Expression):
    def __init__(self, name, baseTypes, body):
        self.name = name
        self.baseTypes = baseTypes
        self.body = body

class FunctionDefinition(Expression):
    def __init__(self, access, name, bang, params, body):
        self.access = access
        self.name = name
        self.bang = bang
        self.params = params
        self.body = body

class CatchFunctionDefinition(Expression):
    def __init__(self, access, name, paramType, access, body):
        self.access = access
        self.name = name
        self.paramType = paramType
        self.body = body

class DestructorDefinition(Expression):
    def __init__(self, name, destructorType, body):
        self.name = name
        self.destructorType = destructorType
        self.body = body

class ClosureDefinition(Expression):
    def __init__(self, name, bang, params, body):
        self.name = name
        self.bang = bang
        self.params = params
        self.body = body

class CatchClosureDefinition(Expression):
    def __init__(self, name, paramType, body):
        self.name = name
        self.paramType = paramType
        self.body = body

class DestructorClosureDefinition(Expression):
    def __init__(self, name, destructorType, body):
        self.name = name
        self.destructorType = destructorType
        self.body = body

class GlobalSubjectDefinition(Expression):
    def __init__(self, let, access, name, assignType, rhs):
        self.let = let
        self.access = access
        self.name = name
        self.assignType = assignType
        self.rhs = rhs

class TypeSubjectDefinition(Expression):
    def __init__(self, let, pin, access, name, assignType, rhs):
        self.let = let
        self.pin = pin
        self.access = access
        self.name = name
        self.assignType = assignType
        self.rhs = rhs

class FunctionSubjectDefinition(Expression):
    def __init__(self, let, pin, access, name, assignType, rhs):
        self.let = let
        self.pin = pin
        self.access = access
        self.name = name
        self.assignType = assignType
        self.rhs = rhs

class LoopSubjectDefinition(Expression):
    def __init__(self, let, hold, pin, name, assignType, rhs):
        self.let = let
        self.hold = hold
        self.pin = pin
        self.access = access
        self.name = name
        self.assignType = assignType
        self.rhs = rhs

class GlobalPropertyDefinition(Expression):
    def __init__(self, let, access, name, assignType, setBody, getBody):
        self.let = let
        self.access = access
        self.name = name
        self.assignType = assignType
        self.setBody = setBody
        self.getBody = getBody

class TypePropertyDefinition(Expression):
    def __init__(self, let, pin, access, name, assignType, setBody, getBody):
        self.let = let
        self.pin = pin
        self.access = access
        self.name = name
        self.assignType = assignType
        self.setBody = setBody
        self.getBody = getBody

class FunctionPropertyDefinition(Expression):
    def __init__(self, let, pin, access, name, assignType, setBody, getBody):
        self.let = let
        self.pin = pin
        self.access = access
        self.name = name
        self.assignType = assignType
        self.setBody = setBody
        self.getBody = getBody

class LoopPropertyDefinition(Expression):
    def __init__(self, let, hold, pin, name, assignType, setBody, getBody):
        self.let = let
        self.hold = hold
        self.pin = pin
        self.access = access
        self.name = name
        self.assignType = assignType
        self.setBody = setBody
        self.getBody = getBody

class SetBodyDefinition(Expression):
    def __init__(body):
        self.body = body

class GetBodyDefinition(Expression):
    def __init__(body):
        self.body = body

class ImportStatement(Expression):
     def __init__(self, path, names, specifiers):
         self.path = path
         self.names = names
         self.specifiers = specifiers

class IfStatement(Expression):
    def __init__(self, exprs, body, end):
        self.exprs = exprs
        self.body = body
        self.end = end

class ElifStatement(Expression):
    def __init__(self, exprs, body, end):
        self.exprs = exprs
        self.body = body
        self.end = end

class ElseStatement(Expression):
    def __init__(self, body):
        self.body = body

class WhereStatement(Expression):
    def __init__(self, exprs):
        self.exprs = exprs

class MatchStatement(Expression):
    def __init__(self, args, body):
        self.args = args
        self.body = body

class WithStatement(Expression):
    def __init__(self, exprs, body, end):
        self.exprs = exprs
        self.body = body
        self.end = end

class ForLoopStatement(Expression):
    def __init__(self, loopIterators, body):
        self.loopIterators = loopIterators
        self.body = body

class WhileLoopStatement(Expression):
    def __init__(self, exprs, body):
        self.exprs = exprs
        self.body = body

class RepeatLoopStatement(Expression):
    def __init__(self, body, exprs):
        self.body = body
        self.exprs = exprs

class BlockStatement(Expression):
    def __init__(self, body):
        self.body = body

class TryStatement(Expression):
    def __init__(self, body):
        self.body = body

class TryWithStatement(Expression):
    def __init__(self, body):
        self.body = body

class CatchStatement(Expression):
    def __init__(self, params, body):
        self.params = params
        self.body = body

class EnsureStatement(Expression):
    def __init__(self, body):
        self.body = body

class Label(Expression):
    def __init__(self, name):
        self.name = name

class LoopIterator(Expression):
    def __init__(self, ref, lhs, rhs):
        self.ref = ref
        self.lhs = lhs
        self.rhs = rhs

class FunctionCall(Expression):
    def __init__(self, ref, emit, name, bang, genericTypeArgs, args):
        self.ref = ref
        self.emit = emit
        self.emit = name
        self.bang = bang
        # self.vector = vector
        self.genericTypeArgs = genericTypeArgs
        self.args = args

class CatchCall(Expression):
    def __init__(self, expr, name):
        self.expr = expr
        self.name = name

class NewCall(Expression):
    def __init__(self, super_or_self_call_expr, args):
        self.super_or_self_call_expr = super_or_self_call_expr
        self.args = args

class SuperCall(Expression):
    def __init__(self, generic_type_args, args):
        self.generic_type_args = generic_type_args
        self.args = args

class SelfCall(Expression):
    def __init__(self, generic_type_args, args):
        self.generic_type_args = generic_type_args
        self.args = args

class As(Expression):
	def __init__(self, ref, lhs, rhs):
        self.ref = ref
        self.lhs = lhs
        self.rhs = rhs

class Equal(Expression):
	def __init__(self, ref, lhs, rhs):

class NotEqual(Expression):
	def __init__(self, ref, lhs, rhs):
        self.ref = ref
        self.lhs = lhs
        self.rhs = rhs

class GreaterThan(Expression):
	def __init__(self, ref, lhs, rhs):
        self.ref = ref
        self.lhs = lhs
        self.rhs = rhs

class GreaterThanOrEqual(Expression):
	def __init__(self, ref, lhs, rhs):
        self.ref = ref
        self.lhs = lhs
        self.rhs = rhs

class lesserThan(Expression):
	def __init__(self, ref, lhs, rhs):
        self.ref = ref
        self.lhs = lhs
        self.rhs = rhs

class LesserThanOrEqual(Expression):
	def __init__(self, ref, lhs, rhs):
        self.ref = ref
        self.lhs = lhs
        self.rhs = rhs

class Not(Expression):
	def __init__(self, ref, expr):
        self.ref = ref
        self.expr = expr

class Return(Expression):
    def __init__(self, expr):
        self.expr = expr

class Yield(Expression):
    def __init__(self, expr):
        self.expr = expr

class Break(Expression):
    def __init__(self, labelName):
        self.labelName = labelName

class Continue(Expression):
    def __init__(self, labelName):
        self.labelName = labelName

class Spill(Expression):
    def __init__(self):
        pass

class Nothing(Expression):
    def __init__(self):
        pass

class Reference(Expression):
    def __init__(self, ref):
        self.ref = ref

class Name(Expression):
    def __init__(self, name):
        self.name = name

class FuncObject(Expression):
    def __init__(self, ref, name, args):
        self.ref = ref
        self.name = name
        self.args = args

class Typeobject(Expression):
    def __init__(self, name):
        self.name = name

class UnnamedArg(Expression):
    def __init__(self, ref, number):
        self.ref = ref
        self.number = number

class Varargs(Expression):
    def __init__(self, let, pin, name, assign_type, rhs):
        self.let = let
        self.pin = pin
        self.access = access
        self.name = name
        self.assignType = assignType
        self.rhs = rhs

class UnaryPrefix(Expression):
    def __init__(self, ref, expr, op):
        self.ref = ref
        self.expr = expr
        self.op = op

class UnaryPostFix(Expression):
    def __init__(self, ref, op, expr):
        self.ref = ref
        self.op = op
        self.expr = expr

class Binary(Expression):
    def __init__(self, ref, lhs, op, rhs):
        self.ref = ref
        self.lhs = lhs
        self.op = op
        self.rhs = rhs

class GenericsDeclaration(Expression):
    def __init__(self, ref, name, constraintKind, expr):
        self.ref = ref
        self.name = name
        self.constraintKind = constraintKind
        self.expr = expr

class GenericsTypeOf(Expression):
    def __init__(self, ref, expr):
        self.ref = ref
        self.expr = expr

class GenericsJustLike(Expression):
    def __init__(self, ref, name0, name1):
        self.ref = ref
        self.name0 = name0
        self.name1 = name1

class Range(Expression):
    def __init__(self, ref, lhs, rhs):
        self.ref = ref
        self.lhs = lhs
        self.rhs = rhs

class Indexer(Expression):
    def __init__(self, ref, expr, indices):
        self.ref = ref
        self.expr = expr
        self.indices = indices

class Tupling(Expression):
    def __init__(self, ref, expr):
        self.ref = ref
        self.expr = expr

class NumberLiteral(Expression):
    def __init__(self, ref, literal, tag):
        self.ref = ref
        self.literal = literal
        self.tag = tag

class BoolLiteral(Expression):
    def __init__(self, ref, literal):
        self.ref = ref
        self.literal = literal

class StrLiteral(Expression):
    def __init__(self, ref, strings, exprs):
        self.ref = ref
        self.strings = strings
        self.exprs = exprs

class CharsLiteral(Expression):
    def __init__(self, ref, chars, exprs):
        self.ref = ref
        self.chars = chars
        self.exprs = exprs

class TupleLiteral(Expression):
    def __init__(self, args):
        self.ref = ref
        self.literal = literal

class ListLiteral(Expression):
    def __init__(self, ref, dimen, type, exprs):
        self.ref = ref
        self.dimen = dimen
        self.type = type #######################################
        self.exprs = exprs

class DictLiteral(Expression):
    def __init__(self, ref, dimen, types, exprs):
        self.ref = ref
        self.dimen = dimen
        self.types = types
        self.exprs = exprs

class RegexLiteral(Expression):
    def __init__(self, ref, literal):
        self.ref = ref
        self.literal = literal

class NSNumberLiteral(Expression):
    def __init__(self, ref, name, literal):
        self.ref = ref
        self.name = name
        self.literal = literal

class NSStrLiteral(Expression):
    def __init__(self, ref, name, literal):
        self.ref = ref
        self.name = name
        self.literal = literal

class NSListLiteral(Expression):
    def __init__(self, ref, dimen, type, name, exprs):
        self.ref = ref
        self.dimen = dimen
        self.type = type
        self.name = name
        self.exprs = exprs

class NSDictLiteral(Expression):
    def __init__(self, ref, dimen, types, name, exprs):
        self.ref = ref
        self.dimen = dimen
        self.types = types
        self.name = name
        self.exprs = exprs

class Formatting(Expression):
    def __init__(self, ref, expr, literal):
        self.ref = ref
        self.expr = expr
        self.literal = literal
