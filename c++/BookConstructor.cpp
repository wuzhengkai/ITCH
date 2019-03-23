#include "BookConstructor.cpp"

BookConstructor::BookConstructor(std::string inputMessageCSV, std::string outputMessageCSV, std::string outputBookCSV,std::string _Stock):message_reader(inputMessageCSV),message_writer(outputMessageCSV),book_writer(outputMessageCSV),Stock(_Stock){
    
}

BookConstructor::next(void){
    std::string msgString message_reader.getLine();
    updateMessage(msgString);
    updatePool();
    updateBook();
    WriteBookAndMessage();
}

BookConstructor::updateMessage(const std::string &msg){
    if(msg[0]=='A' || msg[0]=='F'){
        // create order
        message new_mes();

    }
}

