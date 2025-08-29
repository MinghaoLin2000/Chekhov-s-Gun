-[AMRemoteActionExecution copyWithZone:]
id __cdecl -[AMRemoteActionExecution copyWithZone:](AMRemoteActionExecution *self, SEL a2, _NSZone *a3)
{
  AMRemoteActionExecution *v4; // x20
  AMRemoteActionRunner *v5; // x21
  AMRunActionOperation *v6; // x22
  NSArray *v7; // x23
  _BOOL8 v8; // x24
  id v9; // x25
  id v10; // x26
  AMRemoteActionExecution *v11; // x20

  v4 = objc_alloc(&OBJC_CLASS___AMRemoteActionExecution);
  v5 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution runner](self, "runner"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution runActionOperation](self, "runActionOperation"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution allOperations](self, "allOperations"));
  v8 = -[AMRemoteActionExecution runningAysnchronously](self, "runningAysnchronously");
  v9 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution xpcCompletionHandler](self, "xpcCompletionHandler"));
  v10 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution overallCompletionHandler](self, "overallCompletionHandler"));
  v11 = -[AMRemoteActionExecution initWithRunner:runActionOperation:allOperations:runningAsynchronously:xpcCompletionHandler:overallCompletionHandler:](
          v4,
          "initWithRunner:runActionOperation:allOperations:runningAsynchronously:xpcCompletionHandler:overallCompletionHandler:",
          v5,
          v6,
          v7,
          v8,
          v9,
          v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  -[AMRemoteActionExecution setHasProgress:](
    v11,
    "setHasProgress:",
    -[AMRemoteActionExecution hasProgress](self, "hasProgress"));
  -[AMRemoteActionExecution setCalledWillFinishRunning:](
    v11,
    "setCalledWillFinishRunning:",
    -[AMRemoteActionExecution calledWillFinishRunning](self, "calledWillFinishRunning"));
  -[AMRemoteActionExecution setPaused:](v11, "setPaused:", -[AMRemoteActionExecution isPaused](self, "isPaused"));
  return v11;
}