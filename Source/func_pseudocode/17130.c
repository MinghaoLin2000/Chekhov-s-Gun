-[AMActionLoaderServiceInstance set_loaderServiceActionsByUUID:]
void __cdecl -[AMActionLoaderServiceInstance set_loaderServiceActionsByUUID:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3)
{
  objc_storeStrong((id *)&self->__loaderServiceActionsByUUID, a3);
}