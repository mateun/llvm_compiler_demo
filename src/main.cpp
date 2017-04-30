#include <stdio.h>
#include <llvm/ADT/APFloat.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/LLVMContext.h>

using namespace llvm;

static LLVMContext TheContext;

int main(int argc, char** args) {
	float val = 12.89f;
	Value* constExpr = ConstantFP::get(TheContext, APFloat(val));
	
	printf("hello world!\n");
	return 0;
}
