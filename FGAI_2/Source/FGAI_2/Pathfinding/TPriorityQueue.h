#pragma once

template <typename Elem>
class TPriorityQueue
{
private:
	struct TPriorityQueueNode
	{
		Elem Element;
		float Prio;

		TPriorityQueueNode()
		{
		}

		TPriorityQueueNode(Elem Element, const float Prio) : Element(Element), Prio(Prio)
		{
		};

		bool operator<(const TPriorityQueueNode Other) const
		{
			return Prio < Other.Prio;
		}

		bool operator==(const TPriorityQueueNode& Other) const
		{
			return Element == Other.Element;
		}
	};


public:

	TPriorityQueue()
	{
		Data.Heapify();
	}

	Elem Pop()
	{
		TPriorityQueueNode Node;
		Data.HeapPop(Node);
		return Node.Element;
	}

	void Push(Elem Element, float Prio)
	{
		// Remove the old entry, if there is one.
		Data.Remove(TPriorityQueueNode(Element, 0.0f));

		TPriorityQueueNode Node(Element, Prio);
		Data.HeapPush(Node);
	}

	bool IsEmpty() const
	{
		return Data.Num() == 0;
	}

	void Empty()
	{
		Data.Empty();
	}

	bool Contains(Elem Element) const
	{
		for (const auto& Entry : Data)
		{
			if(Entry.Element == Element) return true;
		}
		return false;
	}

	float GetPrioFor(Elem Element) const
	{
		for (const auto& Entry : Data)
		{
			if(Entry.Element == Element) return Entry.Prio;
		}
		return INFINITY;
	}

	float PeekPrio() const
	{
		return Data.HeapTop().Prio;
	}

private:

	TArray<TPriorityQueueNode> Data;
};
