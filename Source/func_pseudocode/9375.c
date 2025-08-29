-[TSPDatabase upgradeFromSchemaVersion:error:]
bool __cdecl -[TSPDatabase upgradeFromSchemaVersion:error:](TSPDatabase *self, SEL a2, int a3, id *a4)
{
  unsigned int v8; // w23
  unsigned int v9; // w8
  __int64 v10; // x24
  void *v11; // x25
  NSString *v12; // x24
  NSString *v13; // x26
  const char *v14; // x2
  unsigned int v15; // w0
  __int64 v16; // x0
  int v17; // w0
  unsigned int v18; // w0
  unsigned int v19; // w0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x2
  char v23; // w8
  unsigned __int8 v24; // w21
  sqlite3_stmt *v26; // [xsp+8h] [xbp-58h] BYREF

  if ( self->_incrementalVacuum )
  {
    v26 = 0LL;
    if ( -[TSUDatabase prepareStatement:sql:error:](self, "prepareStatement:sql:error:", &v26, "pragma auto_vacuum", a4)
      && -[TSUDatabase startSingleResultQuery:error:](self, "startSingleResultQuery:error:", v26, a4)
      && -[TSUDatabase executeUpdateWithSql:error:](self, "executeUpdateWithSql:error:", "pragma auto_vacuum = 2", a4) )
    {
      v8 = -[TSUDatabase executeUpdateWithSql:error:](self, "executeUpdateWithSql:error:", "vacuum", a4);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = 1;
  }
  if ( a3 >= 6 )
  {
    v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2C80);
    v11 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016BD1C(v10, v11);
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDatabase upgradeFromSchemaVersion:error:]"));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDatabase.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v12,
      v13,
      337LL,
      0LL,
      "Invalid schema version");
    objc_release(v13);
    objc_release(v12);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    if ( v8 )
    {
LABEL_11:
      v9 = -[TSUDatabase beginTransactionWithError:](self, "beginTransactionWithError:", a4);
      goto LABEL_18;
    }
  }
  else
  {
    if ( a3 == 5 )
      return 1;
    if ( v8 )
      goto LABEL_11;
  }
  v9 = 0;
LABEL_18:
  if ( a3 == 1 )
  {
    if ( v9 )
    {
      if ( -[TSUDatabase executeUpdateWithSql:error:](
             self,
             "executeUpdateWithSql:error:",
             "alter table objects rename to temp_migration_objects",
             a4) )
      {
        if ( -[TSUDatabase executeUpdateWithSql:error:](
               self,
               "executeUpdateWithSql:error:",
               "create table objects (identifier integer primary key, class integer, stateType integer, state)",
               a4) )
        {
          if ( -[TSUDatabase executeUpdateWithSql:error:](
                 self,
                 "executeUpdateWithSql:error:",
                 "insert into objects (identifier, class, stateType, state) select identifier, class, stateType, state fr"
                 "om temp_migration_objects",
                 a4) )
          {
            if ( -[TSUDatabase executeUpdateWithSql:error:](
                   self,
                   "executeUpdateWithSql:error:",
                   "drop table temp_migration_objects",
                   a4) )
            {
              if ( -[TSUDatabase executeUpdateWithSql:error:](
                     self,
                     "executeUpdateWithSql:error:",
                     "alter table relationships rename to temp_migration_relationships",
                     a4) )
              {
                v15 = -[TSUDatabase executeUpdateWithSql:error:](
                        self,
                        "executeUpdateWithSql:error:",
                        "create table relationships (sourceObject integer, targetObject integer, primary key(sourceObject"
                        ", targetObject))",
                        a4);
                v26 = 0LL;
                if ( v15 )
                {
                  if ( -[TSUDatabase prepareStatement:sql:error:](
                         self,
                         "prepareStatement:sql:error:",
                         &v26,
                         "insert into relationships (sourceObject, targetObject) select sourceObject, targetObject from t"
                         "emp_migration_relationships where updateType != ?",
                         a4) )
                  {
                    v16 = sqlite3_bind_int(v26, 1, 0);
                    v17 = TSUHandleSqlite(v16, a4, 1LL, self, a2, 388LL, 0LL);
                    v9 = 0;
                    if ( !v17 )
                    {
LABEL_38:
                      a3 = 2;
                      goto LABEL_39;
                    }
                    v18 = -[TSUDatabase executeUpdate:shouldFinalize:error:](
                            self,
                            "executeUpdate:shouldFinalize:error:",
                            v26,
                            1LL,
                            a4);
                    v26 = 0LL;
                    if ( v18 )
                    {
                      v9 = -[TSUDatabase executeUpdateWithSql:error:](
                             self,
                             "executeUpdateWithSql:error:",
                             "drop table temp_migration_relationships",
                             a4);
                      goto LABEL_38;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v9 = 0;
    goto LABEL_38;
  }
  if ( !a3 )
  {
    if ( !v9
      || !-[TSUDatabase executeUpdateWithSql:error:](
            self,
            "executeUpdateWithSql:error:",
            "create table document (version integer, compatibleVersion integer, closedCleanly integer)",
            a4)
      || !-[TSUDatabase executeUpdateWithSql:error:](
            self,
            "executeUpdateWithSql:error:",
            "create table objects (identifier integer primary key, class integer, stateType integer, state)",
            a4)
      || !-[TSUDatabase executeUpdateWithSql:error:](
            self,
            "executeUpdateWithSql:error:",
            "create table relationships (sourceObject integer, targetObject integer, primary key(sourceObject, targetObject))",
            a4)
      || !-[TSUDatabase executeUpdateWithSql:error:](
            self,
            "executeUpdateWithSql:error:",
            "create table dataStates (identifier integer primary key, state blob)",
            a4) )
    {
      goto LABEL_69;
    }
    v14 = "create table cullingState (identifier integer primary key, change integer)";
LABEL_57:
    if ( -[TSUDatabase executeUpdateWithSql:error:](self, "executeUpdateWithSql:error:", v14, a4) )
    {
      v22 = 5LL;
      goto LABEL_66;
    }
LABEL_69:
    -[TSUDatabase commitTransactionWithError:](self, "commitTransactionWithError:", a4);
    goto LABEL_70;
  }
LABEL_39:
  if ( a3 == 2 )
    v19 = 0;
  else
    v19 = v9;
  if ( a3 == 2 && v9 )
  {
    if ( -[TSUDatabase executeUpdateWithSql:error:](
           self,
           "executeUpdateWithSql:error:",
           "create table cullingState (identifier integer primary key, change integer)",
           a4) )
    {
      goto LABEL_45;
    }
    goto LABEL_52;
  }
  if ( (unsigned int)(a3 - 4) >= 0xFFFFFFFE )
  {
    if ( v19 )
    {
LABEL_45:
      v19 = -[TSUDatabase executeUpdateWithSql:error:](
              self,
              "executeUpdateWithSql:error:",
              "create table document (version integer, compatibleVersion integer, closedCleanly integer)",
              a4);
      v26 = 0LL;
      if ( v19 )
      {
        if ( -[TSUDatabase prepareStatement:sql:error:](
               self,
               "prepareStatement:sql:error:",
               &v26,
               "insert into document (version, compatibleVersion) values (?, ?)",
               a4) )
        {
          v20 = sqlite3_bind_int64(v26, 1, 0x2CBCC7AB8LL);
          v19 = TSUHandleSqlite(v20, a4, 1LL, self, a2, 413LL, 0LL);
          if ( v19 )
          {
            v21 = sqlite3_bind_int64(v26, 2, 0x2CBCC7AB8LL);
            v19 = TSUHandleSqlite(v21, a4, 1LL, self, a2, 414LL, 0LL);
            if ( v19 )
              v19 = -[TSUDatabase executeUpdate:shouldFinalize:error:](
                      self,
                      "executeUpdate:shouldFinalize:error:",
                      v26,
                      1LL,
                      a4);
          }
        }
        else
        {
          v19 = 0;
        }
      }
      goto LABEL_53;
    }
LABEL_52:
    v19 = 0;
    v26 = 0LL;
LABEL_53:
    a3 = 4;
  }
  if ( a3 == 4 && v19 )
  {
    v14 = "alter table document add column closedCleanly integer";
    goto LABEL_57;
  }
  if ( a3 == 4 )
    v23 = 0;
  else
    v23 = v19;
  if ( a3 == 4 )
    v22 = 5LL;
  else
    v22 = (unsigned int)a3;
  if ( (v23 & 1) == 0 )
    goto LABEL_69;
LABEL_66:
  v24 = -[TSUDatabase setSchemaVersion:error:](self, "setSchemaVersion:error:", v22, a4);
  if ( -[TSUDatabase commitTransactionWithError:](self, "commitTransactionWithError:", a4) && (v24 & 1) != 0 )
    return 1;
LABEL_70:
  sub_100027CD4(a4);
  return 0;
}