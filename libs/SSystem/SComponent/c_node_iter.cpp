//
// Generated By: dol2asm
// Translation Unit: c_node_iter
//

#include "SSystem/SComponent/c_node_iter.h"
#include "SSystem/SComponent/c_node.h"
#include "dol2asm.h"
#include "dolphin/types.h"

/* 80266324-802663B4 0090+00 s=0 e=1 z=0  None .text
 * cNdIt_Method__FP10node_classPFP10node_classPv_iPv            */
int cNdIt_Method(node_class* pNode, cNdIt_MethodFunc pMethod, void* pUserData) {
    int ret = 1;
    node_class* pNext = NODE_GET_NEXT(pNode);

    while (pNode) {
        int methodRet = pMethod(pNode, pUserData);
        if (!methodRet)
            ret = 0;
        pNode = pNext;
        pNext = NODE_GET_NEXT(pNext);
    }

    return ret;
}

/* 802663B4-80266440 008C+00 s=0 e=1 z=0  None .text
 * cNdIt_Judge__FP10node_classPFP10node_classPv_PvPv            */
void* cNdIt_Judge(node_class* pNode, cNdIt_JudgeFunc pJudge, void* pUserData) {
    node_class* pNext = NODE_GET_NEXT(pNode);

    while (pNode) {
        void* pJudgeRet = pJudge(pNode, pUserData);
        if (pJudgeRet != NULL)
            return pJudgeRet;
        pNode = pNext;
        pNext = NODE_GET_NEXT(pNext);
    }

    return NULL;
}
