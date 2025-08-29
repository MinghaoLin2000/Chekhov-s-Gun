+[TSPFileManager copyDataFromReadChannel:decryptionInfo:toWriteChannel:encryptionInfo:completion:]
void __cdecl +[TSPFileManager copyDataFromReadChannel:decryptionInfo:toWriteChannel:encryptionInfo:completion:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  objc_msgSend(
    a1,
    "copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:synchronous:completion:",
    a3,
    a4,
    0LL,
    a5,
    a6,
    0LL,
    a7);
}