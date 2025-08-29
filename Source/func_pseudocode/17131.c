-[AMActionLoaderServiceInstance .cxx_destruct]
void __cdecl -[AMActionLoaderServiceInstance .cxx_destruct](AMActionLoaderServiceInstance *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->__loaderServiceActionsByUUID, 0LL);
  objc_storeStrong((id *)&self->__previouslyActiveApplicationProcessIdentifier, 0LL);
  objc_storeStrong((id *)&self->__activatingWindowHandler, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->__operationQueue, 0LL);
}