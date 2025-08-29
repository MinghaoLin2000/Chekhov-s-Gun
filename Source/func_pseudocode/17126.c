-[AMActionLoaderServiceInstance _activatingWindowHandler]
AMActivatingWindowHandler *__cdecl -[AMActionLoaderServiceInstance _activatingWindowHandler](
        AMActionLoaderServiceInstance *self,
        SEL a2)
{
  return (AMActivatingWindowHandler *)objc_getProperty(self, a2, 16LL, 1);
}