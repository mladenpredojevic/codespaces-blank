#pragma once

class Introduction {
    public:
    Introduction() {
        std::cout << "Zdravo!!" << "\n";
    }

    ~Introduction() {
        std::cout << "Dovidjenja" << "\n";
    }
};

class TaskDescriptor {
    std::string taskname{};
    int task_id;
    int estimation;
    protected:    
    int SetTaskData();
    int GetTaskData();
    TaskDescriptor(){

    }
    ~TaskDescriptor(){

    }

};

class Task {
    TaskDescriptor *task_descriptor;
    public:
    int AddTask(TaskDescriptor &task_descriptor);
    int ModifyTask(TaskDescriptor &task_descriptor);
    int SetTaskState(TaskDescriptor &task_descriptor);

    Task(){
        
    }
    ~Task(){

    }

};
class project:public Introduction {
    std::string proj_name;
    std::vector<Task> tasks;
};
