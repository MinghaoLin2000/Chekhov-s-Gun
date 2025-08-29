-[AMLoaderServiceAction remoteActionRunner:didReceiveExceptionError:fromAsynchronousAction:]
void __cdecl -[AMLoaderServiceAction remoteActionRunner:didReceiveExceptionError:fromAsynchronousAction:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  -[AMLoaderServiceAction _tearDownExecutionWithError:](self, "_tearDownExecutionWithError:", a4);
}