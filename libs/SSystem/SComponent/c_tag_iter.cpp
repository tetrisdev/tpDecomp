//
// Generated By: dol2asm
// Translation Unit: c_tag_iter
//

#include "SSystem/SComponent/c_tag_iter.h"
#include "SSystem/SComponent/c_tag.h"
#include "dol2asm.h"
#include "dolphin/types.h"

/* 80266A7C-80266AB0 0034+00 s=0 e=4 z=0  None .text
 * cTgIt_MethodCall__FP16create_tag_classP13method_filter       */
int cTgIt_MethodCall(create_tag_class* pTag, method_filter* pMethodFilter) {
    return pMethodFilter->mpMethodFunc((node_class*)pTag->mpTagData, pMethodFilter->mpUserData);
}

/* 80266AB0-80266AE4 0034+00 s=0 e=5 z=0  None .text
 * cTgIt_JudgeFilter__FP16create_tag_classP12judge_filter       */
void* cTgIt_JudgeFilter(create_tag_class* pTag, judge_filter* pJudgeFilter) {
    return pJudgeFilter->mpJudgeFunc((node_class*)pTag->mpTagData, pJudgeFilter->mpUserData);
}
