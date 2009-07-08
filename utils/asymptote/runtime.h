/***** Autogenerated from runtime.in; changes will be overwritten *****/

#ifndef RUNTIME_H
#define RUNTIME_H

namespace run {
void IntZero(vm::stack *);
void realZero(vm::stack *);
void boolFalse(vm::stack *);
void pushNullArray(vm::stack *);
void pushNullRecord(vm::stack *);
void pushNullFunction(vm::stack *);
void pushDefault(vm::stack *);
void isDefault(vm::stack *);
void boolMemEq(vm::stack *);
void boolMemNeq(vm::stack *);
void boolFuncEq(vm::stack *);
void boolFuncNeq(vm::stack *);
void pairToGuide(vm::stack *);
void pathToGuide(vm::stack *);
void guideToPath(vm::stack *);
void newPicture(vm::stack *);
void newPen(vm::stack *);
void loadModule(vm::stack *);
void nullPath(vm::stack *);
void nullPath3(vm::stack *);
void nullGuide(vm::stack *);
void dotsGuide(vm::stack *);
void dashesGuide(vm::stack *);
void newCycleToken(vm::stack *);
void curlSpecifierValuePart(vm::stack *);
void curlSpecifierSidePart(vm::stack *);
void tensionSpecifierOutPart(vm::stack *);
void tensionSpecifierInPart(vm::stack *);
void tensionSpecifierAtleastPart(vm::stack *);
void emptyString(vm::stack *);
void transformXPart(vm::stack *);
void transformYPart(vm::stack *);
void transformXXPart(vm::stack *);
void transformXYPart(vm::stack *);
void transformYXPart(vm::stack *);
void transformYYPart(vm::stack *);
void real6ToTransform(vm::stack *);
void transformIdentity(vm::stack *);
void pairZero(vm::stack *);
void realRealToPair(vm::stack *);
void pairNegate(vm::stack *);
void pairXPart(vm::stack *);
void pairYPart(vm::stack *);
void tripleZero(vm::stack *);
void realRealRealToTriple(vm::stack *);
void tripleXPart(vm::stack *);
void tripleYPart(vm::stack *);
void tripleZPart(vm::stack *);
void emptyArray(vm::stack *);
void newDeepArray(vm::stack *);
void newInitializedArray(vm::stack *);
void newAppendedArray(vm::stack *);
void newDuplicateArray(vm::stack *);
void arrayRead(vm::stack *);
void arraySliceRead(vm::stack *);
void arraySliceReadToEnd(vm::stack *);
void arrayArrayRead(vm::stack *);
void arrayWrite(vm::stack *);
void arraySliceWrite(vm::stack *);
void arraySliceWriteToEnd(vm::stack *);
void arrayLength(vm::stack *);
void arrayKeys(vm::stack *);
void arrayCyclicFlag(vm::stack *);
void arrayInitializedHelper(vm::stack *);
void arrayInitialized(vm::stack *);
void arrayCyclicHelper(vm::stack *);
void arrayCyclic(vm::stack *);
void arrayPushHelper(vm::stack *);
void arrayPush(vm::stack *);
void arrayAppendHelper(vm::stack *);
void arrayAppend(vm::stack *);
void arrayPopHelper(vm::stack *);
void arrayPop(vm::stack *);
void arrayInsertHelper(vm::stack *);
void arrayInsert(vm::stack *);
void arrayDelete(vm::stack *);
void arrayAlias(vm::stack *);
void arrayIntArray(vm::stack *);
void arraySequence(vm::stack *);
void arrayFunction(vm::stack *);
void arraySort(vm::stack *);
void arrayCopy(vm::stack *);
void arrayConcat(vm::stack *);
void array2Copy(vm::stack *);
void array3Copy(vm::stack *);
void array2Transpose(vm::stack *);
void array3Transpose(vm::stack *);
void arrayConditional(vm::stack *);
void diagonal(vm::stack *);
void pairArrayFFT(vm::stack *);
void nullFile(vm::stack *);
void namePart(vm::stack *);
void modePart(vm::stack *);
void dimensionPart(vm::stack *);
void lineModePart(vm::stack *);
void csvModePart(vm::stack *);
void wordModePart(vm::stack *);
void singleRealModePart(vm::stack *);
void singleIntModePart(vm::stack *);
void signedIntModePart(vm::stack *);
}

#endif // RUNTIME_H
