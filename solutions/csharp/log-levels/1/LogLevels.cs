using System;

static class LogLine
{
    public static string Message(string logLine) => logLine[System.Text.RegularExpressions.Regex.Match(logLine, "[[A-Z]*]:\\s+").Length..].Trim();

    public static string LogLevel(string logLine) => logLine[1..System.Text.RegularExpressions.Regex.Match(logLine, "^[[A-Z]*").Length].ToLower();

    public static string Reformat(string logLine) => $"{Message(logLine)} ({LogLevel(logLine)})";
}
