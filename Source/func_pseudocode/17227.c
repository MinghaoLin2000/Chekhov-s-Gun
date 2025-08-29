-[AMLoaderServiceAction remoteActionRunner:didStopAsynchronousAction:]
void __cdecl -[AMLoaderServiceAction remoteActionRunner:didStopAsynchronousAction:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4)
{
  -[AMLoaderServiceAction _tearDownExecutionWithError:](self, "_tearDownExecutionWithError:", 0LL, a4);
}