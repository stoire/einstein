#ifndef UNITY_EXPORT
#define UNITY_EXPORT

#ifndef NULL
#ifndef __cplusplus
#define NULL (void*)0
#else
#define NULL 0
#endif
#endif

#ifdef __cplusplus
extern "C"
{
#endif

void export_char(int a);
void export_flush(void);
void export_start(unsigned int baudrate);
void export_complete(void);

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif /* OUTPUT_EXPORT */
