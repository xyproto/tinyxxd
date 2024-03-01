static FILE* log_file;

// append_to_log is a utility function that can be used for finding the most used execution paths
static void append_to_log(char logChar)
{
    log_file = fopen("log.txt", "a");
    if (log_file != NULL) {
        fputc(logChar, log_file);
        fclose(log_file);
    }
}

fflush(log_file);
fclose(log_file);
