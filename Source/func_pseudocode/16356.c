-[EAFirmwareUpdater isDeploymentAllowed:]
bool __cdecl -[EAFirmwareUpdater isDeploymentAllowed:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  void *v3; // x0
  void *v4; // x19
  void *v5; // x20

  v3 = objc_msgSend(a3, "objectForKey:", CFSTR("DeploymentList"));
  if ( !v3 )
    return 1;
  v4 = v3;
  v5 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UARPAssetID), "initWithLocationType:remoteURL:", 3LL, 0LL);
  objc_msgSend(v5, "processUARPDeploymentRules:", v4);
  LOBYTE(v4) = (unsigned __int8)objc_msgSend(v5, "deploymentAllowed");
  objc_release(v5);
  return (char)v4;
}