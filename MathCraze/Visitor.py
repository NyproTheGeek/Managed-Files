from MathCrazeParser import MathCrazeParser
from MathCrazeVisitor import MathCrazeVisitor

class Visitor(MathCrazeVisitor):
    def __init__(self):
        self.memory = {}


    def visitAssign(self, ctx:MathCrazeParser.AssignContext):
        name = ctx.NAME().getText()
        value = self.visit(ctx.equal())
        self.memory[name] = value
        return value


    def visitAdd1(self, ctx:MathCrazeParser.Add1Context):
        return self.visit(ctx.add())


    def visitAddSub(self, ctx:MathCrazeParser.AddSubContext):
        left = self.visit(ctx.add())
        right = self.visit(ctx.mul())
        if ctx.op.type == MathCrazeParser.ADD:
            return left + right
        return left - right


    def visitMul1(self, ctx:MathCrazeParser.Mul1Context):
        return self.visit(ctx.mul())


    def visitPower1(self, ctx:MathCrazeParser.Power1Context):
        return self.visit(ctx.exponent())


    def visitMulDiv(self, ctx:MathCrazeParser.MulDivContext):
        left = self.visit(ctx.mul())
        right = self.visit(ctx.exponent())
        if ctx.op.type == MathCrazeParser.MUL:
            return left * right
        return left / right


    def visitPower(self, ctx:MathCrazeParser.PowerContext):
        left = self.visit(ctx.expr())
        right = self.visit(ctx.exponent(1))
        return left ** right

    def visitExpr1(self, ctx:MathCrazeParser.Expr1Context):
        return self.visit(ctx.expr())


    def visitName(self, ctx:MathCrazeParser.NameContext):
        name = ctx.NAME().getText()
        print("DEGUG>> ", self.memory[name])
        if name in self.memory: return self.memory[name]
        return 0


    def visitNum(self, ctx:MathCrazeParser.NumContext):
        return float(ctx.NUM().getText())


    def visitParens(self, ctx:MathCrazeParser.ParensContext):
        return self.visit(ctx.add())
