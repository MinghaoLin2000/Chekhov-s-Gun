-[XPCSignpostReader initializeMetrics]
void __cdecl -[XPCSignpostReader initializeMetrics](XPCSignpostReader *self, SEL a2)
{
  NSMutableDictionary *v3; // x0
  NSMutableDictionary *launches; // x8
  NSMutableDictionary *v5; // x0
  NSMutableDictionary *extendedLaunches; // x8
  NSMutableDictionary *v7; // x0
  NSMutableDictionary *resumes; // x8
  NSMutableDictionary *v9; // x0
  NSMutableDictionary *hangs; // x8
  NSMutableDictionary *v11; // x0
  NSMutableDictionary *glitches; // x8
  NSMutableDictionary *v13; // x0
  NSMutableDictionary *processExits; // x8
  NSMutableDictionary *v15; // x0
  NSMutableDictionary *activations; // x8
  NSMutableDictionary *v17; // x0
  NSMutableDictionary *summarizedSignpostDurations; // x8
  NSMutableDictionary *v19; // x0
  NSMutableDictionary *summarizedSignpostMetrics; // x8
  NSMutableDictionary *v21; // x0
  NSMutableDictionary *summarizedSignpostEvents; // x8
  NSMutableDictionary *v23; // x0
  NSMutableDictionary *numAppSignposts; // x8
  NSMutableArray *v25; // x0
  NSMutableArray *launchTimeSeries; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  launches = self->_launches;
  self->_launches = v3;
  objc_release(launches);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  extendedLaunches = self->_extendedLaunches;
  self->_extendedLaunches = v5;
  objc_release(extendedLaunches);
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  resumes = self->_resumes;
  self->_resumes = v7;
  objc_release(resumes);
  v9 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  hangs = self->_hangs;
  self->_hangs = v9;
  objc_release(hangs);
  v11 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  glitches = self->_glitches;
  self->_glitches = v11;
  objc_release(glitches);
  v13 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  processExits = self->_processExits;
  self->_processExits = v13;
  objc_release(processExits);
  v15 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  activations = self->_activations;
  self->_activations = v15;
  objc_release(activations);
  v17 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  summarizedSignpostDurations = self->_summarizedSignpostDurations;
  self->_summarizedSignpostDurations = v17;
  objc_release(summarizedSignpostDurations);
  v19 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  summarizedSignpostMetrics = self->_summarizedSignpostMetrics;
  self->_summarizedSignpostMetrics = v19;
  objc_release(summarizedSignpostMetrics);
  v21 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  summarizedSignpostEvents = self->_summarizedSignpostEvents;
  self->_summarizedSignpostEvents = v21;
  objc_release(summarizedSignpostEvents);
  v23 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  numAppSignposts = self->_numAppSignposts;
  self->_numAppSignposts = v23;
  objc_release(numAppSignposts);
  v25 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  launchTimeSeries = self->_launchTimeSeries;
  self->_launchTimeSeries = v25;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(launchTimeSeries);
}