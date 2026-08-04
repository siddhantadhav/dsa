# DSA & Interview Prep

![C++](https://img.shields.io/badge/Solutions-C%2B%2B-00599C?logo=cplusplus&logoColor=white)
![LeetCode](https://img.shields.io/badge/Practice-LeetCode-FFA116?logo=leetcode&logoColor=white)
![Status](https://img.shields.io/badge/Status-Not%20Started-lightgrey)
![Timeline](https://img.shields.io/badge/Timeline-6--9%20months-blue)

C++ solutions to data structures & algorithms problems, organized by topic — plus the full 6–9 month roadmap I'm following for FAANG/MAANG interview prep (DSA, system design, LLD, CS fundamentals, behavioral).

> **Currently on:** Not started — Phase 1 (Foundations) up first
> *(update this line as you progress)*

---

## About This Repo

This repo serves two purposes:

1. **Solutions archive** — every problem I solve lives here, one file per problem, with a standard header (link, pattern, complexity, key insight) so it's greppable during revision.
2. **The roadmap** — the complete plan below: what to study, in what order, with which resources, and — just as importantly — *how* to study so it actually sticks.

Built for someone working full-time and prepping ~15–20 hours per week.

<details>
<summary><b>Changelog</b></summary>

**v2.1**

- Resources reorganized into explicit **Do / If stuck / Skip by default** per phase
- Added [How to Use the Resources](#how-to-use-the-resources) — the one-resource rule and default picks table
- Practice resources split into **core spine** vs **situational**

**v2**

- Added **Backtracking** as its own phase (previously buried inside "recursion patterns")
- Added **Greedy and Intervals** as its own phase (previously missing entirely)
- Added **Rules of Engagement** — study mechanics, including anti-video-binge rules
- Added a concrete **Revision System** (mistakes log + spaced re-solving)
- Added **Checkpoints** with timed exit criteria after key phases
- **Phase 9 (Advanced)** now has an explicit entry gate
- Added repo structure conventions and a progress tracker

</details>

---

## Repository Structure

```
dsa/
├── array/
├── string/
├── two-pointers/
├── sliding-window/
├── stack-queue/
├── linked-list/
├── binary-search/
├── backtracking/
├── greedy-intervals/
├── trees/
├── heap/
├── trie/
├── graph/
├── dp/
├── advanced/
├── mistakes-log.md
├── template.cpp
└── README.md
```

Every solution file starts with this header:

```cpp
// Problem: https://leetcode.com/problems/...
// Pattern: sliding window (variable size)
// Time: O(n) | Space: O(k)
// Notes: <one-line key insight>
```

The `Pattern:` line is what makes revision possible later — you grep by pattern, not by problem name.

---

## Table of Contents

- [Rules of Engagement](#rules-of-engagement)
- [How to Use the Resources](#how-to-use-the-resources)
- [Timeline at a Glance](#timeline-at-a-glance)
- [Track 1 — Data Structures and Algorithms](#track-1--data-structures-and-algorithms)
  - [Phase 0 — Language Setup](#phase-0--language-setup)
  - [Phase 1 — Foundations](#phase-1--foundations)
  - [Phase 2 — Linear Structures](#phase-2--linear-structures)
  - [Phase 3 — Searching and Sorting](#phase-3--searching-and-sorting)
  - [Phase 4 — Backtracking](#phase-4--backtracking)
  - [Phase 5 — Greedy and Intervals](#phase-5--greedy-and-intervals)
  - [Phase 6 — Trees, Heaps, and Tries](#phase-6--trees-heaps-and-tries)
  - [Phase 7 — Graphs](#phase-7--graphs)
  - [Phase 8 — Dynamic Programming](#phase-8--dynamic-programming)
  - [Phase 9 — Advanced](#phase-9--advanced)
  - [The Revision System](#the-revision-system)
  - [Practice Resources](#practice-resources)
- [Track 2 — System Design](#track-2--system-design)
- [Track 3 — Low-Level Design](#track-3--low-level-design)
- [Track 4 — CS Fundamentals](#track-4--cs-fundamentals)
- [Track 5 — Behavioral](#track-5--behavioral)
- [Track 6 — Mock Interviews](#track-6--mock-interviews)
- [Company Quick Reference](#company-quick-reference)
- [Weekly Schedule](#weekly-schedule)
- [Progress Tracker](#progress-tracker)
- [Final Notes](#final-notes)

---

## Rules of Engagement

These rules matter more than the phase order. Most people fail interview prep not because of a bad syllabus but because of bad study mechanics.

1. **The 30–45 minute rule.** Attempt every problem for at least 30 minutes (45 for hard) before looking at any solution. Struggling is the mechanism by which learning happens.
2. **Close the solution before coding.** If you do read a solution, close it and implement from memory. If you can't, you didn't understand it — read again.
3. **Solve ≥ watch.** Never let weekly video-hours exceed weekly solving-hours. Videos are for *unblocking*, not for *covering* topics.
4. **Timed from day one.** Use a timer on every problem. Interview pressure is a trained skill, not a personality trait.
5. **Complexity analysis is part of the solution.** Write time and space complexity in the header before submitting. Every time.
6. **Re-solve, don't re-read.** Reviewing means a blank editor and solving from scratch, not nodding at old code.
7. **The recovery rule.** Miss 3 days → restart that week's plan. Don't "catch up" — catch-up debt is how people quit.

---

## How to Use the Resources

**The resource lists are a menu, not a checklist.** Multiple resources are listed per phase because different explanations click for different people — they cover the *same* material. You are never supposed to consume all of them.

**The one-resource rule:** each phase gets **one primary learning resource + one practice sheet**. Everything else is a fallback for when a specific concept doesn't click. The unit of progress is **problems solved and checkpoints passed** — never "resources finished."

### ✅ Do

- Pick the **Do** resource for each phase and commit to it
- Attempt every problem 30–45 min before touching any solution
- Watch a video only to unblock a *specific* concept you just failed
- Measure the week in problems solved, not videos watched or chapters read

### ❌ Don't

- Don't read/watch everything listed under a phase — that's how month-1 burnout happens
- Don't watch playlists front-to-back before solving (Phases 6–8 especially — those playlists are 50+ videos each)
- Don't use two resources for the same topic "to be safe" — pick one, switch only if it genuinely isn't clicking
- Don't read books (CTCI, Sedgewick, Silberschatz, Kurose) cover-to-cover — they're reference/optional depth
- Don't start Phase 9 before passing the Phase 8 gate

### Default picks at a glance

If you don't want to decide, use exactly this:

| Phase | ✅ Do | 🔁 If stuck | ⏭️ Skip by default |
| ----- | ---- | ----------- | ------------------ |
| 1 | CP Handbook ch. 1–2 → Striver A2Z Step 1 | Abdul Bari (Big O basics) | LeetCode Explore card |
| 2 | NeetCode 150 (attempt → solution video) | Striver SDE Days 1–6 (extra reps) | CTCI ch. 1–2 |
| 3 | Aditya Verma BS playlist (watch fully — the exception) + must-solves | — | LeetCode Explore card |
| 4 | NeetCode Backtracking | Striver recursion (template confusion) | — |
| 5 | NeetCode Greedy + Intervals | Striver A2Z Greedy step | — |
| 6 | NeetCode Trees / Heap / Tries | Striver trees — *only* videos for topics you failed | Morris traversal |
| 7 | Fiset video **per algorithm**, right before its problems + NeetCode | Striver graphs (alt explanations) | CP Handbook graph chapters |
| 8 | **ONE of** Verma *or* Striver DP → then AtCoder EDPC | the other playlist, per-topic only | Digit DP on first pass |
| 9 | CSES Problem Set (only after the gate) | cp-algorithms, Errichto | everything, until gate passed |

---

## Timeline at a Glance

| Months | Focus                                             | Hours/week                                        |
| ------ | ------------------------------------------------- | ------------------------------------------------- |
| 1–4    | DSA (Phases 1–8) + CS fundamentals in parallel    | 12–15 hrs DSA, 3 hrs fundamentals                 |
| 4–6    | DSA revision + System Design + LLD                | 6 hrs DSA, 6 hrs SD, 3 hrs LLD                    |
| 6–7    | Mock interviews + behavioral + company-specific   | 5 hrs mocks, 3 hrs behavioral, 5 hrs DSA revision |
| 7+     | Active applying + targeted prep based on feedback | varies                                            |

Rusty on C++/STL? Add Phase 0 upfront. Already solid on a topic? Skip it — but verify with timed problems, don't self-assess.

**Language:** C++ for problem-solving. Go stays for system design discussions and side projects.

---

## Track 1 — Data Structures and Algorithms

Total: ~350–400 problems across Phases 1–8. Phase 9 is gated and optional.

### Phase 0 — Language Setup

**Duration:** 1 week (optional — only if rusty on C++/STL)

**Topics:** `vector`, `string`, `map`/`unordered_map`, `set`/`unordered_set`, `priority_queue`, `stack`, `queue`, `deque`, `pair`, iterators, `sort` with custom comparators, `lower_bound`/`upper_bound`, lambdas.

**✅ Do:** William Lin's STL tutorials, rebuilding `template.cpp` as you go.
**📖 Reference:** [cppreference.com](https://cppreference.com) — bookmark it, don't "read" it.

> **✅ Exit test:** implement a frequency-count + sort-by-value problem in under 10 minutes without looking anything up.

### Phase 1 — Foundations

**Duration:** 1–2 weeks · **Volume:** ~30–40 problems

**Topics:** Big O analysis (including amortized), space complexity, recursion basics, basic math (GCD, LCM, sieve of Eratosthenes, modular arithmetic), bit manipulation (XOR tricks, `n & (n-1)`, checking/setting/clearing bits).

**✅ Do:** [*Competitive Programming Handbook*](https://cses.fi/book.pdf) chapters 1–2 (~25 pages, one sitting) → solve Striver A2Z Step 1.
**🔁 If stuck:** Abdul Bari's first few videos, only if Big O isn't clicking.
**⏭️ Skip by default:** LeetCode "Recursion I" Explore card — redundant with the above.

**Must-solve:** counting bits, single number, reverse bits, power of two, pow(x, n) via fast exponentiation.

### Phase 2 — Linear Structures

**Duration:** 3–4 weeks · **Volume:** ~80–100 problems

**Topics:** Arrays, strings, two pointers, sliding window (fixed + variable), prefix sums, difference arrays, Kadane's algorithm, hash maps/sets, matrix traversal (spiral, rotate, set zeroes), stacks (including monotonic stack), queues, deques (sliding window maximum), linked lists (reversal patterns, Floyd's cycle detection, merging).

**✅ Do:** [NeetCode 150](https://neetcode.io/practice) — Arrays & Hashing, Two Pointers, Sliding Window, Stack, Linked List. The workflow *is* the resource: attempt each problem first (Rule 1), then watch its solution video. Learning and practice in one.
**🔁 If stuck / want extra reps:** Striver SDE Sheet Days 1–6.
**⏭️ Skip by default:** CTCI chapters 1–2 — optional depth, only if the phase finishes early.

**Must-solve:** longest substring without repeating characters, trapping rain water, next greater element, LRU cache, minimum window substring, rotate image, merge K sorted lists (preview of heaps).

> **✅ Checkpoint:** a brand-new LeetCode easy in ≤ 15 min; a new two-pointer or sliding-window medium in ≤ 30 min. If not, extend this phase — do not move on.

### Phase 3 — Searching and Sorting

**Duration:** 1–2 weeks · **Volume:** ~25–30 problems

**Topics:** Binary search variants (lower bound, upper bound, on rotated arrays, **binary search on the answer**), implementing merge sort and quicksort by hand, counting sort, custom comparators, partition logic (Dutch national flag).

**✅ Do:** Aditya Verma's binary search playlist — **the one playlist worth watching fully**: it's short and teaches the pattern system. Then the must-solves.
**⏭️ Skip by default:** LeetCode binary search Explore card — redundant after Verma.

**Must-solve:** median of two sorted arrays, koko eating bananas, capacity to ship packages within D days, find peak element, search in rotated sorted array I/II, kth largest element (quickselect).

### Phase 4 — Backtracking

**Duration:** 1 week · **Volume:** ~15–20 problems

A distinct pattern family, and the prerequisite for DP — Phase 8's core strategy ("write the recursive brute force first") assumes fluency here.

**Topics:** The choose → explore → un-choose template, subsets vs permutations vs combinations (know *why* the loops differ), pruning, backtracking on grids, backtracking with constraints.

**✅ Do:** NeetCode 150 — Backtracking section, attempt-first.
**🔁 If stuck:** the backtracking half of Striver's recursion playlist, if the templates confuse you.

**Must-solve:** subsets I/II, permutations, combination sum I/II, letter combinations of a phone number, generate parentheses, palindrome partitioning, word search, N-Queens, sudoku solver.

> **✅ Checkpoint:** write the subsets, permutations, and combination-sum templates from memory, and explain when each applies.

### Phase 5 — Greedy and Intervals

**Duration:** 1 week · **Volume:** ~15–20 problems

Greedy problems appear constantly in interviews, and the greedy-vs-DP decision ("does local optimal imply global optimal?") is something interviewers explicitly probe.

**Topics:** Exchange argument intuition, interval scheduling (sort by start vs sort by end — know when each is correct), sweep line basics, greedy with sorting, greedy with heaps.

**✅ Do:** NeetCode 150 — Greedy and Intervals sections.
**🔁 If stuck:** Striver's A2Z Greedy step for extra reps.

**Must-solve:** merge intervals, insert interval, non-overlapping intervals, meeting rooms I/II, jump game I/II, gas station, task scheduler, partition labels, hand of straights, valid parenthesis string.

**Key skill:** for every problem, articulate *why* greedy works — or find the counterexample proving it doesn't and DP is needed. That articulation is the interview answer.

### Phase 6 — Trees, Heaps, and Tries

**Duration:** 3 weeks · **Volume:** ~50 problems

**Topics:** Binary tree traversals (recursive + iterative), BST operations and validation, LCA, tree diameter, tree DP intro, heap operations via `priority_queue`, top-K problems, two-heaps pattern (median from stream), tries (insert/search/delete, prefix problems, word search II).

**✅ Do:** NeetCode 150 — Trees, Heap/Priority Queue, Tries sections, attempt-first.
**🔁 If stuck:** Striver's tree playlist — **selectively**: watch only the videos for concepts you just failed. Never front-to-back.
**⏭️ Skip by default:** Morris traversal — elegant but interview-rare; month 4–6 revision material at most.

**Must-solve:** serialize/deserialize binary tree, kth smallest in BST, binary tree maximum path sum, lowest common ancestor, top K frequent elements, find median from data stream, design Twitter (heap + hashmap), implement trie + word search II.

### Phase 7 — Graphs

**Duration:** 3–4 weeks · **Volume:** ~50–60 problems

**Topics:** Adjacency list vs matrix, BFS/DFS on grids and graphs, multi-source BFS, cycle detection (directed + undirected), topological sort (Kahn's + DFS), Dijkstra, Bellman-Ford, Floyd-Warshall, Kruskal + Prim (MST), union-find with path compression and union by rank, bipartite checking.

**✅ Do:** work through the must-solves + NeetCode graph problems, and watch the matching **William Fiset video right before each new algorithm** — his BFS video before BFS problems, his Dijkstra video before Dijkstra problems.
**❌ Don't:** watch Fiset's or Striver's full playlist upfront "to prepare" — that's the exact Rule 3 violation this phase tempts you into.
**🔁 If stuck:** Striver's graph playlist as an alternative explanation for a specific algorithm.
**⏭️ Skip by default:** CP Handbook graph chapters — reference only.

**Must-solve:** number of islands, rotting oranges (multi-source BFS), course schedule I/II, clone graph, pacific atlantic water flow, network delay time (Dijkstra), cheapest flights within K stops (Bellman-Ford), redundant connection (union-find), accounts merge, word ladder, alien dictionary.

> **✅ Checkpoint:** two new graph mediums back-to-back in 60 minutes, including choosing the right algorithm unprompted.

### Phase 8 — Dynamic Programming

**Duration:** 4–6 weeks · **Volume:** ~80–100 problems

The hardest topic, biggest interview ROI. Don't rush.

**Topic order:**

1. **1D DP** — climbing stairs, house robber, decode ways, coin change
2. **2D DP** — unique paths, edit distance, LCS, longest palindromic substring
3. **Knapsack family** — 0/1, unbounded, subset sum, target sum, partition equal subset sum
4. **LIS patterns** — including O(n log n), Russian doll envelopes
5. **DP on intervals** — matrix chain multiplication, burst balloons, palindrome partitioning II
6. **DP on trees** — house robber III, binary tree max path sum (revisit from Phase 6)
7. **Bitmask DP** — TSP-style, beautiful arrangement
8. **Digit DP** — skip on first pass; revisit during revision only if targeting Google

**✅ Do:** pick **ONE** playlist — Aditya Verma (better for building pattern recognition from zero) *or* Striver DP (better for end-to-end coverage) — solve along with it, then finish with the **AtCoder Educational DP Contest (EDPC)**: 26 problems covering every major pattern.
**❌ Don't:** do both playlists. That's 100+ videos and pure procrastination dressed as diligence.
**🔁 If stuck:** the *other* playlist's video for that one topic only.

**Strategy:** for every problem, follow the pipeline: recursive brute force → memoization → tabulation → space optimization. Write the recursion even when you "see" the table directly — that's the muscle that solves unseen hard problems. (This is why Phase 4 exists.)

> **✅ Final checkpoint:** any random LeetCode medium in ≤ 25 min with clean code and stated complexity; hards solvable within 45 min with at most one hint. This is the FAANG bar — and the gate to Phase 9.

### Phase 9 — Advanced

**Duration:** ongoing · **Entry gate:** Phase 8 checkpoint passed

Advanced topics are the classic procrastination trap — segment trees feel productive while your medium-solving speed quietly stays at 40 minutes. Only enter after passing the gate.

**Topics:** Segment trees (with lazy propagation), Fenwick/BIT, KMP, Z-function, Rabin-Karp, Tarjan's SCC, bridges and articulation points, max-flow basics, square root decomposition.

**✅ Do (only after the gate):** [CSES Problem Set](https://cses.fi/problemset), topic by topic.
**📖 Reference:** [cp-algorithms.com](https://cp-algorithms.com); Errichto's channel when a topic needs a walkthrough.

**Who needs this:** Google L4/L5 and Meta E5 sometimes touch this tier (mostly string algorithms and union-find extensions). Everyone else: your time is better spent on system design and mocks.

### The Revision System

Learning DSA is a retention problem disguised as a coverage problem. Without this system, Phase 2 material evaporates by the time you reach Phase 8.

**1. The mistakes log** ([`mistakes-log.md`](mistakes-log.md)). One row per failed or struggled problem:

```
| Date | Problem | Pattern | Why I failed | Key insight |
|------|---------|---------|--------------|-------------|
| Mar 3 | Min Window Substring | sliding window | shrink condition wrong | shrink while valid, record before shrinking |
```

"Why I failed" must be one of: *didn't recognize the pattern* / *knew pattern, wrong implementation* / *edge cases* / *too slow*. The category tells you what to fix.

**2. Spaced re-solving.** Every problem in the log gets re-solved **from scratch, blank editor**: once after **7 days**, once after **30 days**. Saturday's review block is when this happens. Fail a re-solve → back in the queue.

**3. The 3-strike rule.** Fail the same problem three times → the *pattern* (not the problem) becomes a flashcard: trigger conditions on the front, template on the back. Review flashcards weekly.

**4. Phase-boundary review.** Before starting a new phase, re-solve 5 random problems from all previous phases. Interleaving beats blocked practice.

### Practice Resources

**Core spine — these carry Phases 1–8:**

| Resource                      | Role                                                  | Cost    |
| ----------------------------- | ----------------------------------------------------- | ------- |
| NeetCode 150                  | Primary practice sheet + solution videos, Phases 2–6  | Free    |
| Aditya Verma (BS + DP)        | Pattern-teaching playlists for Phases 3 and 8         | Free    |
| CP Handbook ch. 1–2           | Phase 1 theory, one sitting                           | Free    |
| AtCoder EDPC                  | DP final-boss set, end of Phase 8                     | Free    |

**Situational — only when the condition applies:**

| Resource                  | Use only when...                                       | Cost    |
| ------------------------- | ------------------------------------------------------ | ------- |
| Striver A2Z / SDE / playlists | A concept didn't click, or you want extra reps     | Free    |
| Blind 75                  | Final review pass in the last month                    | Free    |
| LeetCode Premium          | Last 2 months — company-tagged questions only          | ~$35/mo |
| CSES Problem Set          | Phase 9, after the gate                                | Free    |
| Codeforces / AtCoder      | The Saturday contest slot                              | Free    |
| CTCI / Sedgewick          | A phase finished early and you want depth              | Paid    |

---

## Track 2 — System Design

Start after DSA Phase 6. Required for any role above L3/E3.

### SD Phase 1 — Fundamentals (3 weeks)

**Topics:** Latency vs throughput, CAP theorem, ACID vs BASE, consistency models (strong, eventual, causal), horizontal vs vertical scaling, load balancers (L4 vs L7), caching strategies (write-through, write-back, write-around, cache-aside), CDNs, database indexes, replication (leader-follower, multi-leader), sharding and partitioning strategies.

**✅ Do:** *System Design Interview Vol 1* by Alex Xu, cover to cover — the one book that IS read fully. ByteByteGo (same author, free) as the visual companion.
**🔁 Depth, not blocking:** *Designing Data-Intensive Applications* chapters 1–6 — read alongside, don't gate progress on it.

### SD Phase 2 — Building Blocks (3 weeks)

**Topics:** Message queues (Kafka, RabbitMQ, SQS), pub/sub, distributed caching (Redis, Memcached), object storage (S3) and distributed file systems, search systems (Elasticsearch), distributed coordination (Zookeeper, etcd), rate limiting algorithms, consistent hashing, bloom filters.

**✅ Do:** [Hello Interview](https://hellointerview.com) key-technology and pattern write-ups (free, FAANG-engineer authored) + *DDIA* chapters 7–12 selectively.
**⏭️ Skip by default:** reading [system-design-primer](https://github.com/donnemartin/system-design-primer) front-to-back — it's a revision index, not a course. Same for High Scalability: read ~5 case studies, not the archive.

### SD Phase 3 — Case Studies (4 weeks, the meat of preparation)

Design each yourself first (45 min, on paper or Excalidraw), then compare against a reference solution. The self-attempt is the learning; reading designs without attempting is SD's version of video-bingeing.

**Tier 1 (most common):** URL shortener, pastebin, Twitter/news feed, Instagram, WhatsApp/chat, Dropbox/Drive, YouTube/Netflix, Uber.

**Tier 2 (L5+/E5+):** distributed cache, rate limiter, web crawler, search autocomplete, notification system, distributed message queue, distributed KV store, ad click aggregator.

**✅ Do:** self-attempt → compare with the Hello Interview breakdown or Alex Xu Vol 1/2 chapter for that system.
**⏭️ Skip by default:** *Grokking the System Design Interview* (designgurus.io) — only if you exhaust the above and want more volume.

### The 45-Minute Framework

1. Functional requirements (3 min)
2. Non-functional requirements: scale, latency, consistency (3 min)
3. Capacity estimation: QPS, storage, bandwidth (5 min)
4. API design (3 min)
5. High-level architecture (10 min)
6. Database schema and choice (5 min)
7. Deep dive on 1–2 components, driven by interviewer interest (10 min)
8. Bottlenecks and trade-offs (5 min)
9. Wrap-up (1 min)

---

## Track 3 — Low-Level Design

Required for Indian FAANG offices and machine-coding rounds (Flipkart, Razorpay, Atlassian, Uber, Swiggy). Also appears inside FAANG L5+ design discussions.

**Topics:** SOLID principles; the 10 patterns that cover ~90% of interviews — Strategy, Observer, Factory, Singleton, Decorator, Adapter, Command, State, Chain of Responsibility, Composite; UML class diagrams; concurrency primitives (mutex, semaphore, condition variable); designing for extensibility.

**Common problems:** parking lot, elevator, vending machine, Splitwise, snake and ladder, chess, BookMyShow, ride sharing, food delivery, in-memory cache, rate limiter (LLD version), file system.

**✅ Do:** [Refactoring Guru](https://refactoring.guru) for the 10 patterns (free, illustrated) → Concept&&Coding (Shrayansh Jain) playlist for interview-style walkthroughs → timed problems.
**🔁 If stuck:** *Head First Design Patterns* if patterns aren't clicking from Refactoring Guru.
**⏭️ Skip by default:** *Grokking the Object Oriented Design Interview* — only for extra structured volume.

**Practice format:** 90-minute timed sessions — 15 min requirements + class diagram, 60 min working code, 15 min extension ("now add feature X"). The extension is what machine-coding rounds actually grade.

---

## Track 4 — CS Fundamentals

Run in parallel with DSA (3 hrs/week, Sundays). Skipped fundamentals are why senior engineers fail "easy" follow-up questions.

### Operating Systems

**Topics:** Processes vs threads, context switching, scheduling, deadlock (conditions + prevention), synchronization (mutex, semaphore, monitors), virtual memory, paging, page replacement, file system basics.

**✅ Do:** [*OSTEP*](https://pages.cs.wisc.edu/~remzi/OSTEP/) (free) — the virtualization and concurrency parts, chapter-picking by the topic list above.
**🔁 Revision:** Neso Academy playlist for quick pre-interview refresh.

### Databases

**Topics:** Normalization (1NF–BCNF), B-tree vs hash indexes and when each applies, transactions and isolation levels, locking, query optimization basics, NoSQL families (document, KV, column, graph) and when to pick each.

**✅ Do:** [Use The Index, Luke](https://use-the-index-luke.com) for indexing depth + Hussein Nasser's channel for transactions/isolation deep dives.
**⏭️ Skip by default:** *Database System Concepts* (Silberschatz) cover-to-cover — pull selected chapters only when a topic needs rigor.

### Networks

**Topics:** OSI vs TCP/IP, HTTP/1.1 vs 2 vs 3, TCP vs UDP, TLS handshake, DNS resolution, websockets, REST vs gRPC vs GraphQL, "what happens when you type a URL" end-to-end.

**✅ Do:** the [what-happens-when](https://github.com/alex/what-happens-when) repo as the spine — chase each concept you can't explain.
**⏭️ Skip by default:** *Computer Networking: A Top-Down Approach* cover-to-cover — reference for the topics above only.

### Concurrency (the Go advantage)

Already working in Go — weaponize it. Master goroutines, channels, the sync package, race detection, worker pools, fan-in/fan-out, semaphores via buffered channels. Feeds directly into system design discussions.

**✅ Do:** *Concurrency in Go* (Cox-Buday).
**🔁 Depth:** *100 Go Mistakes and How to Avoid Them* — the concurrency chapters.

---

## Track 5 — Behavioral

Often the difference between offer and reject. Don't wing it.

**Framework:** STAR — Situation, Task, Action, Result. Practice until automatic; each story told in 2 minutes.

**Story bank (8–10 stories) covering:** conflict with teammate/manager, proudest project, a failure, disagreed-but-committed, mentored a junior, ownership beyond your role, tough technical trade-off, pushed back on a deadline, customer-facing impact, learned something fast.

**Company-specific:**

- **Amazon** — memorize the [16 Leadership Principles](https://amazon.jobs/en/principles); prepare 2 stories per principle. LPs are ~50% of the decision.
- **Meta** — impact focus; quantify everything (users, $, latency).
- **Google** — Googleyness: collaboration and ambiguity-handling.
- **Apple** — cultural fit, detail obsession, product passion.
- **Microsoft** — growth mindset, learn-it-all framing.

---

## Track 6 — Mock Interviews

Start at month 4–5. Don't wait until you "feel ready" — you won't.

**Platforms:** [Pramp](https://pramp.com) (free, peer-to-peer, start here) → [interviewing.io](https://interviewing.io) (paid, real FAANG engineers, closest to the real bar) → LeetCode mock assessments → 2–3 timed CodeSignal GCAs if targeting companies that use it.

**Cadence:**

- Weeks 1–2: one mock/week, focus on thinking out loud
- Weeks 3–8: 2–3/week mixing DSA and system design
- Final weeks: 3–4/week with detailed feedback

**What to optimize:** talking while coding is a separate skill from solving. The first 5 mocks will feel terrible — that's the point. Record yourself and watch it back: you'll catch filler words, jumping to code before clarifying, and skipped edge-case discussion.

---

## Company Quick Reference

| Company   | DSA bar                                    | SD weight        | Quirks                                                      |
| --------- | ------------------------------------------ | ---------------- | ----------------------------------------------------------- |
| Google    | High (often 1 hard)                        | High at L4+      | Graphs + DP favored; optimality and analysis matter.        |
| Meta      | Medium-high (2 mediums, tricky follow-ups) | Very high at E4+ | Speed: 2 problems in ~35 min. Behavioral round is decisive. |
| Amazon    | Medium (LP-driven)                         | High             | LPs ≈ 50% of decision. Bar raiser is unpredictable.         |
| Apple     | Varies wildly by team                      | Team-dependent   | Deep on your specialty; less standardized.                  |
| Microsoft | Medium                                     | Medium-high      | Friendlier; clear communication and edge cases win.         |
| Netflix   | Medium                                     | Very high        | Essentially senior+ only; culture fit is brutal.            |

Indian offices (Bengaluru/Hyderabad): expect more LLD/machine coding and slightly easier DSA than US bars.

---

## Weekly Schedule

Sample for months 1–4:

| Slot                     | Work                                                                                                 |
| ------------------------ | ---------------------------------------------------------------------------------------------------- |
| Weekday mornings (1 hr)  | 1 LeetCode medium, fully written up with complexity + pattern header                                 |
| Weekday evenings (2 hrs) | Topic learning + 2–3 problems on that topic (remember: solve ≥ watch)                                |
| Saturday (5 hrs)         | 1 contest → revision block (spaced re-solves from the mistakes log) → 1 SD case study (from month 3) |
| Sunday (3 hrs)           | CS fundamentals reading, 1 LLD problem (from month 4), plan next week                                |

Total: ~15–18 hrs/week, sustainable for 4+ months. Extra capacity goes to Saturday depth, not weekday volume.

---

## Progress Tracker

### DSA

- [ ] Phase 0 — C++/STL setup
- [ ] Phase 1 — Foundations
- [ ] Phase 2 — Linear structures
- [ ] Phase 2 checkpoint passed (easy ≤ 15 min, medium ≤ 30 min)
- [ ] Phase 3 — Searching and sorting
- [ ] Phase 4 — Backtracking (+ checkpoint)
- [ ] Phase 5 — Greedy and intervals
- [ ] Phase 6 — Trees, heaps, and tries
- [ ] Phase 7 — Graphs (+ checkpoint)
- [ ] Phase 8 — Dynamic programming
- [ ] Final checkpoint: random mediums ≤ 25 min
- [ ] Phase 9 — Advanced *(only if gate passed and target company needs it)*

### Other Tracks

- [ ] SD Phase 1 — Fundamentals
- [ ] SD Phase 2 — Building blocks
- [ ] SD Phase 3 — 16 case studies designed
- [ ] LLD — 10 patterns + 8 timed problems
- [ ] OS / DBMS / Networks passes complete
- [ ] Behavioral story bank (8–10 stories, STAR, 2 min each)
- [ ] 15+ mock interviews completed
- [ ] First 5 "practice" applications sent

---

## Final Notes

**The compounding insight:** people who land FAANG offers are rarely the smartest in the pool. They're the ones who showed up consistently for 6+ months while everyone else burned out at month 2. Pace beats intensity.

**Retention beats coverage.** A smaller set of problems you can re-solve cold is worth more than a large set you once understood. That's what the revision system is for — trust it even when re-solving feels like "wasted" time. It isn't. It's the actual work.

**Apply early to non-target companies.** Use the first 5–10 real interviews as paid mocks. By the time the target FAANG loop arrives, the muscle memory is already there.

---

*If this roadmap helps you, a ⭐ is appreciated.*
