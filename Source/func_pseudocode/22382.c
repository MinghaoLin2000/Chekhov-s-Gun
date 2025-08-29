_OSAGetScriptInfo
OSAError __cdecl OSAGetScriptInfo(
        ComponentInstance scriptingComponent,
        OSAID scriptID,
        OSType selector,
        __int64 *result)
{
  return _OSAGetScriptInfo(scriptingComponent, scriptID, selector, result);
}