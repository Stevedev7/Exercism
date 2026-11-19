using System;

public static class Bob
{
    public static string Response(string statement) {
        if (string.IsNullOrWhiteSpace(statement)) {
            return "Fine. Be that way!";
        }

        statement = statement.Trim();
        bool isQuestion = statement.EndsWith("?");
        bool isYelling = statement.Equals(statement.ToUpper()) && System.Text.RegularExpressions.Regex.IsMatch(statement, "[A-Z]");

        return isQuestion ? isYelling ? "Calm down, I know what I'm doing!" : "Sure." : isYelling ? "Whoa, chill out!" : "Whatever.";
    }
}