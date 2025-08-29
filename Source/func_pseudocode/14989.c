-[ATXHeuristicJSEnv trackActionsAndExpirersForHeuristicName:mutableResult:performingBlock:]
void __cdecl -[ATXHeuristicJSEnv trackActionsAndExpirersForHeuristicName:mutableResult:performingBlock:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  void (__fastcall **v8)(_QWORD); // x22
  id v9; // x19
  id v10; // x20
  NSString *v11; // x0
  NSString *currentHeuristicName; // x8
  NSMutableArray *v13; // x0
  NSMutableArray *currentActionsBuffer; // x8
  NSMutableSet *v15; // x0
  NSMutableSet *currentExpirersBuffer; // x8
  NSMutableArray *v17; // x0
  NSMutableArray *v18; // x22
  NSMutableSet *v19; // x0
  NSMutableSet *v20; // x23
  NSString *v21; // x0
  void *v22; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = (void (__fastcall **)(_QWORD))objc_retain(a5);
  v9 = objc_retain(a4);
  v10 = objc_retain(a3);
  v11 = (NSString *)objc_msgSend(v10, "copy");
  currentHeuristicName = self->_currentHeuristicName;
  self->_currentHeuristicName = v11;
  objc_release(currentHeuristicName);
  v13 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  currentActionsBuffer = self->_currentActionsBuffer;
  self->_currentActionsBuffer = v13;
  objc_release(currentActionsBuffer);
  v15 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  currentExpirersBuffer = self->_currentExpirersBuffer;
  self->_currentExpirersBuffer = v15;
  objc_release(currentExpirersBuffer);
  v8[2](v8);
  objc_release(v8);
  v17 = self->_currentActionsBuffer;
  self->_currentActionsBuffer = 0LL;
  v18 = objc_retain(v17);
  objc_release(v18);
  v19 = self->_currentExpirersBuffer;
  self->_currentExpirersBuffer = 0LL;
  v20 = objc_retain(v19);
  objc_release(v20);
  v21 = self->_currentHeuristicName;
  self->_currentHeuristicName = 0LL;
  objc_release(v21);
  v22 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___ATXHeuristicActionMakersAndExpirers),
          "initWithActionMakers:expirers:",
          v18,
          v20);
  objc_release(v20);
  objc_msgSend(v9, "setObject:forKeyedSubscript:", v22, v10);
  objc_release(v9);
  objc_release(v10);
  objc_release(v22);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v18);
}