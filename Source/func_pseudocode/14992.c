-[ATXHeuristicJSEnv trackCardsAndRefreshTriggersForInformationHeuristicName:mutableResults:performingBlock:]
void __cdecl -[ATXHeuristicJSEnv trackCardsAndRefreshTriggersForInformationHeuristicName:mutableResults:performingBlock:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  void (__fastcall **v8)(_QWORD); // x22
  id v9; // x20
  id v10; // x21
  NSString *v11; // x0
  NSString *currentInformationHeuristicName; // x8
  __int64 v13; // x1
  NSMutableArray *v14; // x0
  NSMutableArray *currentInfoSuggestionsBuffer; // x8
  __int64 v16; // x1
  NSMutableSet *v17; // x0
  NSMutableSet *currentRefreshTriggerBuffer; // x8
  void *v19; // x22
  NSString *v20; // x0
  NSMutableArray *v21; // x0
  NSMutableSet *v22; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = (void (__fastcall **)(_QWORD))objc_retain(a5);
  v9 = objc_retain(a4);
  v10 = objc_retain(a3);
  v11 = (NSString *)objc_msgSend(v10, "copy");
  currentInformationHeuristicName = self->_currentInformationHeuristicName;
  self->_currentInformationHeuristicName = v11;
  objc_release(currentInformationHeuristicName);
  v14 = (NSMutableArray *)objc_opt_new(&OBJC_CLASS___NSMutableArray, v13);
  currentInfoSuggestionsBuffer = self->_currentInfoSuggestionsBuffer;
  self->_currentInfoSuggestionsBuffer = v14;
  objc_release(currentInfoSuggestionsBuffer);
  v17 = (NSMutableSet *)objc_opt_new(&OBJC_CLASS___NSMutableSet, v16);
  currentRefreshTriggerBuffer = self->_currentRefreshTriggerBuffer;
  self->_currentRefreshTriggerBuffer = v17;
  objc_release(currentRefreshTriggerBuffer);
  self->_hasCurrentHeuristicFailed = 0;
  v8[2](v8);
  objc_release(v8);
  v19 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___ATXInformationHeuristicResult),
          "initWithHeuristicName:suggestions:refreshTriggers:hasFailed:",
          v10,
          self->_currentInfoSuggestionsBuffer,
          self->_currentRefreshTriggerBuffer,
          self->_hasCurrentHeuristicFailed);
  objc_release(v10);
  objc_msgSend(v9, "addObject:", v19);
  objc_release(v9);
  v20 = self->_currentInformationHeuristicName;
  self->_currentInformationHeuristicName = 0LL;
  objc_release(v20);
  v21 = self->_currentInfoSuggestionsBuffer;
  self->_currentInfoSuggestionsBuffer = 0LL;
  objc_release(v21);
  v22 = self->_currentRefreshTriggerBuffer;
  self->_currentRefreshTriggerBuffer = 0LL;
  objc_release(v22);
  self->_hasCurrentHeuristicFailed = 0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v19);
}