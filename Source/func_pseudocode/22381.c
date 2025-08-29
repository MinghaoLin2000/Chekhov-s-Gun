_OSAGetHandler
OSAError __cdecl OSAGetHandler(
        ComponentInstance scriptingComponent,
        SInt32 modeFlags,
        OSAID contextID,
        const AEDesc *handlerName,
        OSAID *resultingCompiledScriptID)
{
  return _OSAGetHandler(scriptingComponent, modeFlags, contextID, handlerName, resultingCompiledScriptID);
}