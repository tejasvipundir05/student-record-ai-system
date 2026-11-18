AI Usage Log

Project Information

Project: AI-Assisted Student Record and Result Management System

SAP ID: 590037087

Course: Programming in C (PRC1001)

AI Tool Used: ChatGPT by OpenAI

AI Assistance During Development

AI Tool| Prompt / Question Asked| How I Used / Verified the Response
ChatGPT| How can I create a menu-driven Student Record Management System in C?| Used the suggested structure, functions, arrays and switch-case logic to organize the program.
ChatGPT| How can I implement add, search, display and delete student functions?| Reviewed the suggested functions and incorporated them into the C program.
ChatGPT| How can I calculate CGPA from available SGPA values?| Used the average of available SGPA values and included handling for unavailable results.
ChatGPT| Suggest simple CGPA-based academic advice using if-else statements.| Adapted the suggestions into four performance categories and implemented them using C conditions.
ChatGPT| How can I sort student records by SAP ID and name?| Used the suggested sorting logic and included comparisons using SAP ID and strcmp().
ChatGPT| How can I test my C project directly on GitHub?| Created a GitHub Actions workflow to compile the program and run automated tests.
ChatGPT| Suggest test cases for five students with different CGPA values.| Used fictional student records and verified the expected recommendation messages through GitHub Actions.
ChatGPT| Help me debug a GitHub Actions compilation error.| Identified a source filename mismatch, corrected the filename and reran the workflow successfully.

Academic Advisor Logic

The academic advisor uses the following CGPA categories:

- CGPA 9.0–10.0: Excellent Performance
- CGPA 7.0–8.99: Good Performance
- CGPA 5.0–6.99: Needs Improvement
- CGPA below 5.0: Requires Immediate Attention

The recommendations are generated using if-else statements in C. No external AI API is used.

Verification and Testing

The project was compiled using GCC through GitHub Actions.

Automated tests used five fictional student records with different SGPA values. The workflow checked student addition, CGPA output, academic-advisor recommendations and successful deletion.

The latest automated workflow completed successfully.

Conclusion

ChatGPT was used as a learning assistant for understanding C programming concepts, designing academic-advisor logic, debugging GitHub Actions errors, preparing test cases and improving documentation.

The final recommendations are produced by the C program itself.
