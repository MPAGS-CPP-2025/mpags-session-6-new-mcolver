#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <cctype>
#include <iostream>
#include <vector>
#include <string>


bool processCommandLine(const std::vector<std::string>& args,
                        bool& helpRequested, bool& versionRequested,
                        std::string& inputFile, std::string& outputFile);

#endif