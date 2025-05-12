#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "Content-type:text/html; charset=utf-8\r\n\r\n";
    
    cout << "<!DOCTYPE html>\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>Hello World - Second CGI Program</title>\n";
    cout << "<meta charset='utf-8'>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<iframe src=""\"https://isft151.edu.ar""\" width=""\"100%""\" height=""\"768""\"></iframe>\n";
    cout << "<form action='pp.cgi' method='post'>";
    cout << "<label>Name:</label>\n";
    cout << "<input type='text' name='name'>\n";
    cout << "<input type='submit' name='sbmt' value='enviar'>\n";
    cout << "</form>\n";

    
    string str = "";
    cin >> str;
    if (str != "")
    {
        cout << "<h2>Hello! your name is: " << str << "</h2>\n";
    }

    cout << "<p id=\"userAgentInfo\"></p>\n";
    cout << "<script>\n";
    cout << "const userAgent = navigator.userAgent;\n";
    cout << "console.log(userAgent);\n";
    // Opcional: Mostrar la información en la página
    cout << "document.getElementById(\"userAgentInfo\").textContent = userAgent;\n";
    cout << "</script>";

    cout << "<div id=""\"ip-address""\"></div>\n";
    cout << "<script>\n";
    cout <<"fetch('https://api.ipify.org?format=json')\n"; // Usando ipify.org
    cout <<".then(response => response.json())\n";
    cout <<".then(data => {\n";
    cout <<"document.getElementById('ip-address').textContent = 'Tu IP es: ' + data.ip;\n";
    cout <<"});\n";
    cout <<"</script>\n";


    cout << "<h1>Información del Procesador</h1>\n";
    cout << "<ul id=""\"processorInfo""\">\n";
    cout << "<li id=""\"userAgent""\"></li>\n";
    cout << "</ul>\n";
    cout << "<script>\n";
    cout << "document.getElementById('userAgent').textContent = 'Agente de Usuario: ' + navigator.userAgent;\n";
    cout << "</script>\n";


    cout << "</body>\n";
    cout << "</html>\n";
    return 0;
}
