# FAANG/MAANG Interview Preparation Roadmap

A complete 6–9 month plan covering DSA, system design, low-level design, CS fundamentals, and behavioral rounds. Designed for someone working full-time and prepping ~15–20 hours per week.

---

## Timeline at a glance

| Months | Focus | Hours/week |
|---|---|---|
| 1–4 | DSA (Phases 1–7) + CS fundamentals in parallel | 12–15 hrs DSA, 3 hrs fundamentals |
| 4–6 | DSA revision + System Design + LLD | 6 hrs DSA, 6 hrs SD, 3 hrs LLD |
| 6–7 | Mock interviews + behavioral + company-specific | 5 hrs mocks, 3 hrs behavioral, 5 hrs DSA revision |
| 7+ | Active applying + targeted prep based on feedback | varies |

If you're rusty on C++/STL, add 1 week upfront to refresh. Skip phases you can already pass at a medium-LeetCode level — but verify with timed problems, don't self-assess.

---

## Track 1 — Data Structures and Algorithms

Use **C++** for problem-solving (per our earlier discussion). Keep Go for system design discussions and side projects.

### Phase 1 — Foundations (1–2 weeks, ~30–40 problems)

**Topics:** Big O analysis (including amortized), space complexity, recursion patterns, basic math (GCD, LCM, sieve, modular arithmetic), bit manipulation (XOR tricks, `n & (n-1)`, bit DP setup).

**Resources:**
- *Competitive Programming Handbook* by Antti Laaksonen — free PDF, chapters 1–2 ([cses.fi/book.pdf](https://cses.fi/book.pdf))
- Abdul Bari's algorithms playlist on YouTube — for asymptotic analysis fundamentals
- LeetCode "Recursion I" Explore card
- Striver's recursion playlist on takeuforward.org

**Practice:** Striver's A2Z Sheet — Step 1 (Basics) and Step 4 (Recursion).

---

### Phase 2 — Linear Structures (3–4 weeks, ~80–100 problems)

**Topics:** Arrays, strings, two pointers, sliding window (fixed + variable), prefix sums, difference arrays, Kadane's, hash maps/sets, stacks (including monotonic stack), queues, deques (sliding window max), linked lists (reversal patterns, Floyd's cycle detection, merging).

**Resources:**
- NeetCode 150 — Arrays & Hashing, Two Pointers, Sliding Window, Stack, Linked List sections ([neetcode.io/practice](https://neetcode.io/practice))
- William Lin's STL tutorials on YouTube (for C++ STL fluency)
- Striver's SDE Sheet — Days 1–6
- *Cracking the Coding Interview* (CTCI) — Chapters 1–2

**Must-solve patterns:** longest substring without repeating, trapping rain water, next greater element, LRU cache, merge K sorted lists (preview of heaps).

---

### Phase 3 — Searching and Sorting (1–2 weeks, ~25–30 problems)

**Topics:** Binary search variants (lower bound, upper bound, on rotated arrays, on the answer), implementing merge sort and quicksort, counting/radix sort, custom comparators, partition logic.

**Resources:**
- Aditya Verma's binary search playlist on YouTube — best free resource on BS patterns
- LeetCode binary search Explore card
- "Binary Search the Answer" article on Codeforces blog

**Must-solve:** median of two sorted arrays, koko eating bananas, capacity to ship packages, find peak element, search in rotated sorted array.

---

### Phase 4 — Trees and Heaps (3 weeks, ~50 problems)

**Topics:** Binary tree traversals (recursive + iterative + Morris), BST operations and validation, LCA, tree diameter, tree DP, heap operations via `priority_queue`, top-K problems, median from stream, tries (insert/search/delete, word search, autocomplete).

**Resources:**
- Striver's Tree playlist on YouTube — most thorough free tree series
- NeetCode 150 — Trees, Heap/Priority Queue, Tries sections
- *Algorithms* by Sedgewick (Coursera, Princeton) — tree chapters

**Must-solve:** serialize/deserialize binary tree, kth smallest in BST, max path sum, top K frequent elements, design Twitter (heap + hashmap), implement trie + word search II.

---

### Phase 5 — Graphs (3–4 weeks, ~50–60 problems)

**Topics:** Adjacency list vs matrix, BFS/DFS on grids and graphs, cycle detection (directed + undirected), topological sort (Kahn's + DFS), Dijkstra, Bellman-Ford, Floyd-Warshall, Kruskal + Prim MST, union-find with path compression and union by rank, bipartite checking.

**Resources:**
- William Fiset's graph theory playlist on YouTube — gold standard, watch in order
- Striver's graph playlist (56 videos, comprehensive)
- *Competitive Programming Handbook* — graph chapters
- LeetCode graph Explore card

**Must-solve:** number of islands, course schedule I/II, network delay time (Dijkstra), cheapest flights within K stops (Bellman-Ford), redundant connection (union-find), word ladder, alien dictionary.

---

### Phase 6 — Dynamic Programming (4–6 weeks, ~80–100 problems)

The hardest topic, biggest interview ROI. Don't rush.

**Topics:**
1. **1D DP** — Fibonacci variants, climbing stairs, house robber, decode ways
2. **2D DP** — unique paths, edit distance, LCS, regex matching
3. **Knapsack family** — 0/1, unbounded, bounded, subset sum, target sum
4. **LIS patterns** — including O(n log n) patience sorting, Russian doll envelopes
5. **DP on intervals** — matrix chain multiplication, burst balloons, palindrome partitioning
6. **DP on trees** — house robber III, binary tree max path sum (revisit)
7. **Bitmask DP** — TSP, assignment problems, beautiful arrangement
8. **Digit DP** — count numbers with given properties (interview-rare, FAANG-occasional)

**Resources:**
- Aditya Verma's DP playlist on YouTube — best for understanding patterns from scratch
- Striver's DP playlist (56 videos) — covers everything end-to-end
- *Dynamic Programming for Coding Interviews* by Meenakshi & Kamal Rawat
- AtCoder Educational DP Contest (the "EDPC") — 26 problems that cover every major pattern

**Strategy:** Memorize the recursion → memoization → tabulation → space optimization pipeline. For every new problem, write the recursive brute force first, even if you "see" the DP — this builds the muscle for harder problems.

---

### Phase 7 — Advanced (ongoing, optional for some companies)

**Topics:** Segment trees (with lazy propagation), Fenwick/BIT, KMP, Z-function, Rabin-Karp, suffix arrays, Tarjan's SCC, bridges and articulation points, max-flow (Dinic's, Ford-Fulkerson), bipartite matching, square root decomposition, heavy-light decomposition, convex hull.

**Resources:**
- *Competitive Programming Handbook* — advanced chapters
- CSES Problem Set ([cses.fi/problemset](https://cses.fi/problemset)) — 300 problems organized by topic, the gold standard
- cp-algorithms.com — comprehensive reference for every algorithm
- Errichto's YouTube channel — advanced topics with clear explanations

For Google L4/L5, Meta E4/E5, expect 1–2 problems from this tier. Other FAANGs rarely test it.

---

### DSA practice resources summary

| Resource | Best for | Cost |
|---|---|---|
| NeetCode 150 | Structured beginner-to-intermediate path | Free |
| Blind 75 | Time-constrained interview crunch | Free |
| Striver's A2Z + SDE Sheet | Comprehensive coverage with videos | Free |
| LeetCode Premium | Company-tagged questions, recent interview qs | $35/month |
| CSES Problem Set | Quality problems for advanced phase | Free |
| Codeforces | Contest practice, harder problems | Free |
| AtCoder | DP and ad hoc, cleaner problems than CF | Free |

**Suggested order:** NeetCode 150 (or Striver SDE) for Phases 1–6 → Blind 75 as a final review pass → LeetCode company tag for target companies in the last 2 months → CSES for anyone aiming Google/Meta high bar.

---

## Track 2 — System Design (HLD)

Start this after Phase 4 of DSA. Required for any role above L3/E3 (basically any non-new-grad role at FAANG).

### Phase 1 — Fundamentals (3 weeks)

**Topics:** Latency vs throughput, CAP theorem, ACID vs BASE, consistency models (strong, eventual, causal), horizontal vs vertical scaling, load balancers (L4 vs L7), caching strategies (write-through, write-back, write-around, cache-aside), CDN basics, database indexes, replication (master-slave, master-master), sharding strategies, partitioning.

**Resources:**
- *System Design Interview Vol 1* by Alex Xu — read cover to cover
- ByteByteGo YouTube channel (same author, free) — start with the "Top 10 System Design Concepts" playlist
- *Designing Data-Intensive Applications* (DDIA) by Martin Kleppmann — chapters 1–6 are foundational, the rest is for later

### Phase 2 — Building blocks (3 weeks)

**Topics:** Message queues (Kafka, RabbitMQ, SQS), pub/sub patterns, distributed caching (Redis, Memcached), distributed file systems (S3, HDFS), search systems (Elasticsearch), time-series databases, distributed coordination (Zookeeper, etcd — relevant for you given Go), rate limiting algorithms, consistent hashing, bloom filters.

**Resources:**
- *DDIA* chapters 7–12
- Gaurav Sen's YouTube playlist on system design
- High Scalability blog ([highscalability.com](http://highscalability.com)) — read 5 case studies
- Tech Dummies (Narendra L) on YouTube — for deep dives on specific systems
- The system-design-primer GitHub repo by donnemartin — good for revision

### Phase 3 — Case studies (4 weeks, the meat of preparation)

Practice designing these systems, then compare your design to standard solutions:

**Tier 1 (most common):**
- URL shortener (bit.ly)
- Pastebin / paste service
- Twitter / news feed
- Instagram / photo sharing
- WhatsApp / chat system
- Dropbox / Google Drive
- YouTube / Netflix
- Uber / Lyft

**Tier 2 (asked at L5+/E5+):**
- Distributed cache (design Redis)
- Rate limiter
- Web crawler
- Search autocomplete
- Notification system
- Distributed message queue
- Distributed key-value store
- Ad click aggregator

**Resources:**
- *System Design Interview Vol 1 & 2* by Alex Xu — covers most of the above
- *Grokking the System Design Interview* (Educative) — paid but worth it ($79/year membership covers more)
- ByteByteGo videos for each system
- Hello Interview ([hellointerview.com](https://hellointerview.com)) — free, FAANG-engineer authored, excellent quality

### System design framework to internalize

For every problem, walk through these steps in order (45 min budget):
1. Functional requirements (3 min)
2. Non-functional requirements: scale, latency, consistency (3 min)
3. Capacity estimation: QPS, storage, bandwidth (5 min)
4. API design (3 min)
5. High-level architecture (10 min)
6. Database schema and choice (5 min)
7. Deep dive on 1–2 components based on interviewer interest (10 min)
8. Bottlenecks and trade-offs (5 min)
9. Wrap-up (1 min)

---

## Track 3 — Low-Level Design (LLD)

Required for Indian FAANG offices and any company with explicit "machine coding" rounds (Razorpay, Flipkart, Atlassian, Uber, Swiggy, etc.). Also asked at FAANG L5+ as part of the design discussion.

### Topics

- SOLID principles
- Design patterns: Strategy, Observer, Factory, Singleton, Decorator, Adapter, Command, State, Chain of Responsibility, Composite (these 10 cover ~90% of interview use)
- UML basics (class diagrams)
- Concurrency primitives (mutex, semaphore, condition variable)
- Designing for extensibility

### Common LLD problems

Parking lot, elevator system, vending machine, library management, splitwise, snake and ladder, chess game, cricket scoreboard, ride sharing service, BookMyShow, food delivery, log analyzer, ATM, file system, in-memory cache, rate limiter (LLD version).

### Resources

- *Head First Design Patterns* by Eric Freeman — best intro to patterns
- *Refactoring Guru* ([refactoring.guru](https://refactoring.guru)) — free, beautifully illustrated patterns
- *Grokking the Object Oriented Design Interview* (Educative)
- workat.tech LLD section
- Concept&&Coding YouTube channel — Shrayansh Jain's LLD playlist is excellent
- Gaurav Sen's LLD playlist

---

## Track 4 — CS Fundamentals

Don't underestimate this. Skipped fundamentals are why senior engineers fail "easy" follow-up questions.

### Operating Systems
**Topics:** Processes vs threads, context switching, scheduling algorithms, deadlock (conditions + prevention), synchronization (mutex, semaphore, monitors), virtual memory, paging, segmentation, page replacement algorithms, file systems basics.

**Resources:**
- *Operating Systems: Three Easy Pieces* (OSTEP) — free at [pages.cs.wisc.edu/~remzi/OSTEP](https://pages.cs.wisc.edu/~remzi/OSTEP/)
- Neso Academy OS playlist for quick revision

### Database Management
**Topics:** Normalization (1NF–3NF, BCNF), indexes (B-tree, hash, when each is used), transactions and isolation levels, locking mechanisms, query optimization, NoSQL types (document, key-value, column, graph) and when to pick each, SQL vs NoSQL trade-offs.

**Resources:**
- *Database System Concepts* by Silberschatz — chapters 1–8, 14–17
- Use The Index Luke ([use-the-index-luke.com](https://use-the-index-luke.com)) for indexing depth
- Hussein Nasser's YouTube channel for backend/database deep dives

### Computer Networks
**Topics:** OSI vs TCP/IP model, HTTP/HTTPS/HTTP/2/HTTP/3, TCP vs UDP, TLS handshake, DNS resolution, websockets, REST vs gRPC vs GraphQL, what happens when you type a URL.

**Resources:**
- *Computer Networking: A Top-Down Approach* by Kurose and Ross
- "What happens when you type google.com" GitHub repo (alex/what-happens-when)

### Concurrency (Go-specific advantage for you)
You already work in Go, so use it. Master goroutines, channels, sync package, race conditions, common patterns (worker pool, fan-in/fan-out, semaphore via buffered channel). This translates directly to system design discussions.

**Resources:**
- *Concurrency in Go* by Katherine Cox-Buday
- *100 Go Mistakes and How to Avoid Them* by Teiva Harsanyi

---

## Track 5 — Behavioral

Often the difference between offer and reject at staff/principal levels. Don't wing it.

### Framework
**STAR**: Situation, Task, Action, Result. Practice until it's automatic.

### Build your story bank
Prepare 8–10 stories covering:
- Conflict with teammate or manager
- Project you're most proud of
- Time you failed
- Disagreed with a decision but committed
- Mentored a junior
- Took ownership beyond your role
- Made a tough technical trade-off
- Pushed back on unrealistic deadline
- Made a customer-facing impact
- Time you had to learn something fast

Each story should be reusable across multiple question types. Practice telling each in 2 minutes.

### Company-specific
- **Amazon**: Memorize the 16 Leadership Principles ([amazon.jobs/en/principles](https://amazon.jobs/en/principles)). Every behavioral question maps to one. Have 2 stories per principle.
- **Meta**: "Drive for impact" focus. Quantify everything ($, users, latency improvements).
- **Google**: Googleyness + leadership. They probe for collaboration and ambiguity-handling.
- **Apple**: Cultural fit, attention to detail, product passion.
- **Microsoft**: Growth mindset, learn-it-all over know-it-all.

### Resources
- *Cracking the Coding Interview* — behavioral chapter
- *Decode and Conquer* by Lewis Lin (more PM-focused but framework applies)
- "STAR method examples" search on LinkedIn for inspiration

---

## Track 6 — Mock interviews

Start mocks at month 4–5. Don't wait until you "feel ready" — you won't.

### Platforms
- **Pramp** ([pramp.com](https://pramp.com)) — free peer-to-peer, good starting point
- **interviewing.io** — paid, with actual FAANG engineers, anonymous, the closest thing to the real bar
- **CodeSignal General Coding Assessment** — used by Meta, Robinhood, etc., do 2–3 timed
- **LeetCode Mock Interview** — basic but free

### Cadence
- Weeks 1–2 of mocks: 1 per week, focus on getting comfortable thinking out loud
- Weeks 3–8: 2–3 per week mixing DSA and system design
- Final weeks: 3–4 per week with detailed feedback

### What to optimize
Talking out loud while coding is a separate skill from solving problems. The first 5 mocks will feel terrible — that's the point. Record yourself and watch back. You'll catch filler words, jumping to code too fast, and forgetting to clarify requirements.

---

## Company-specific tips

| Company | DSA bar | System Design weight | Quirks |
|---|---|---|---|
| Google | High (often 1 hard) | High at L4+ | Likes graph + DP. Heavy on optimal solution + analysis. |
| Meta | Medium-high (2 mediums + tricky follow-ups) | Very high at E4+ | Speed matters — 2 problems in 35 min. Behavioral (1 round) is decisive. |
| Amazon | Medium (LP-driven) | High | LPs are 50% of decision. Bar raiser round is unpredictable. |
| Apple | Varies wildly by team | Team-dependent | Less standardized; deep on chosen specialty. |
| Microsoft | Medium | Medium-high | Friendlier. Focus on clear communication, edge cases. |
| Netflix | Medium DSA | Very high | Senior+ only essentially. Culture fit is brutal. |

For Indian offices (Bengaluru, Hyderabad), expect more LLD/machine coding and slightly easier DSA than US bars.

---

## Sample weekly schedule (months 1–4)

**Weekday mornings (1 hr before work):** 1 LeetCode medium problem, fully written up
**Weekday evenings (2 hrs):** Topic learning + 2–3 problems on that topic
**Saturday (5 hrs):** 1 contest (LeetCode weekly or Codeforces), 1 system design case study, review week's wrong answers
**Sunday (3 hrs):** CS fundamentals reading, 1 LLD problem, plan next week

Total: ~15–18 hrs/week. Sustainable for 4+ months. If you can do more, add it to Saturday case studies, not weekday volume.

---

## Final notes

**The compounding insight:** the people who get FAANG offers are rarely the smartest in the pool. They're the ones who showed up consistently for 6+ months while everyone else burned out at month 2. Pace matters more than intensity.

**Recovery rules:** if you miss 3 days, restart that week's plan, don't try to "catch up." Catch-up debt is how people quit.

**Apply early to non-target companies for practice.** Use your first 5–10 real interviews as paid mocks. By the time you interview at your target FAANG, you'll have 15+ real interviews of muscle memory.

Good luck.
