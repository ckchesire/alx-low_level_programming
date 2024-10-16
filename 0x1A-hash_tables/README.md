# 0x1A. C - Hash tables

A **hash table** is an efficient data structure that uses a **hash function** to map keys to values,
allowing for quick lookups, insertions, and deletions through a fixed-size array. A good hash function
is deterministic, produces a fixed output size, operates efficiently, and ensures a uniform distribution
of hash values to minimize collisions, instances where different inputs yield the same hash value. Collisions
can be managed through techniques like chaining (linking entries at the same index) or open addressing 
(finding alternative slots). While hash tables offer advantages such as average-case constant time complexity 
for operations and dynamic sizing, they also face challenges like collision handling and potential space overhead.

Common use cases include:
- Databases for indexing
- Caching frequently accessed data
- Implementing collections like sets and maps
- Routing Tables in Networking
