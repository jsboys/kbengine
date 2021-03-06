/*
This source file is part of KBEngine
For the latest info, see http://www.kbengine.org/

Copyright (c) 2008-2012 KBEngine.

KBEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

KBEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with KBEngine.  If not, see <http://www.gnu.org/licenses/>.
*/


namespace KBEngine{

//-------------------------------------------------------------------------------------
INLINE RangeNode* RangeNode::pPrevX()const { return pPrevX_; }
INLINE RangeNode* RangeNode::pNextX()const { return pNextX_; }
INLINE RangeNode* RangeNode::pPrevY()const { return pPrevY_; }
INLINE RangeNode* RangeNode::pNextY()const { return pNextY_; }
INLINE RangeNode* RangeNode::pPrevZ()const { return pPrevZ_; }
INLINE RangeNode* RangeNode::pNextZ()const { return pNextZ_; }

//-------------------------------------------------------------------------------------
INLINE void RangeNode::pPrevX(RangeNode* pNode){ if(pNode != NULL)KBE_ASSERT(pPrevX_ != pNode); pPrevX_ = pNode; }
INLINE void RangeNode::pNextX(RangeNode* pNode){ if(pNode != NULL)KBE_ASSERT(pNextX_ != pNode); pNextX_ = pNode; }
INLINE void RangeNode::pPrevY(RangeNode* pNode){ if(pNode != NULL)KBE_ASSERT(pPrevY_ != pNode); pPrevY_ = pNode; }
INLINE void RangeNode::pNextY(RangeNode* pNode){ if(pNode != NULL)KBE_ASSERT(pNextY_ != pNode); pNextY_ = pNode; }
INLINE void RangeNode::pPrevZ(RangeNode* pNode){ if(pNode != NULL)KBE_ASSERT(pPrevZ_ != pNode); pPrevZ_ = pNode; }
INLINE void RangeNode::pNextZ(RangeNode* pNode){ if(pNode != NULL)KBE_ASSERT(pNextZ_ != pNode); pNextZ_ = pNode; }

//-------------------------------------------------------------------------------------
INLINE void RangeNode::pRangeList(RangeList* p){ pRangeList_ = p; }

//-------------------------------------------------------------------------------------
INLINE void RangeNode::flags(uint32 v){ flags_ = v; }
	
//-------------------------------------------------------------------------------------
INLINE uint32 RangeNode::flags()const{ return flags_; }
	
//-------------------------------------------------------------------------------------
INLINE RangeList* RangeNode::pRangeList()const{ return pRangeList_; }

//-------------------------------------------------------------------------------------
}
