void BinaryMinHeap::siftUp(int nodeIndex) {
      int parentIndex, tmp;
      if (nodeIndex != 0) {
            parentIndex = getParentIndex(nodeIndex);
            if (data[parentIndex] > data[nodeIndex]) {
                  tmp = data[parentIndex];
                  data[parentIndex] = data[nodeIndex];
                  data[nodeIndex] = tmp;
                  siftUp(parentIndex);
            }
      }
}
 
void BinaryMinHeap::insert(int value) {
      if (heapSize == arraySize)
            throw string("Heap's underlying storage is overflow");
      else {
            heapSize++;
            data[heapSize - 1] = value;
            siftUp(heapSize - 1);
      }
}
