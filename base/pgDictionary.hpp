#pragma once

namespace rage
{
    class pgDictionaryBase
    {
    public:
        virtual ~pgDictionaryBase() = default;
    }; //Size: 0x0008
   
    template<typename T>
    class pgDictionary : public pgDictionaryBase
    {
    private:
        struct Node {
            T key;
            Node* next;

            Node(const T& k, Node* n = nullptr)
                : key(k), next(n) {}
        };
        Node* head;
    public:
        pgDictionary() : head(nullptr) {}
        ~pgDictionary() {
            clearDict();
        }

        void addDict(const T& key) {
            Node* newNode = new Node(key, head);
            head = newNode;
        }

        bool containsDict(const T& key) const {
            Node* current = head;
            while (current != nullptr) {
                if (current->key == key) {
                    return true;
                }
                current = current->next;
            }
            return false;
        }

        void removeDict(const T& key) {
            if (head == nullptr) {
                return;
            }

            if (head->key == key) {
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }

            Node* current = head;
            while (current->next != nullptr) {
                if (current->next->key == key) {
                    Node* temp = current->next;
                    current->next = current->next->next;
                    delete temp;
                    return;
                }
                current = current->next;
            }
        }

        size_t sizeDict() const {
            size_t count = 0;
            Node* current = head;
            while (current != nullptr) {
                count++;
                current = current->next;
            }
            return count;
        }

        void clearDict() {
            while (head != nullptr) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }
    };
}