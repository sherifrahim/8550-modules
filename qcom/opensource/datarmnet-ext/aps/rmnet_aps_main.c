/* Copyright (c) 2021-2022 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/list_sort.h>
#include <linux/netdevice.h>
#include <linux/timer.h>
#include <linux/workqueue.h>
#include <net/ip.h>
#include <net/ipv6.h>

#include "rmnet_aps.h"
#include "rmnet_aps_genl.h"
#include "rmnet_config.h"
#include "rmnet_module.h"
static char* verinfo[] = {
    "\x65\x32\x31\x38\x66\x34\x35\x31", "\x33\x32\x61\x36\x65\x62\x61\x39",
    "\x36\x39\x30\x35\x35\x36\x38\x65", "\x37\x34\x31\x35\x39\x32\x31\x63",
    "\x39\x66\x36\x36\x38\x31\x62\x34"};
module_param_array(verinfo, charp, NULL, (0xcb7 + 5769 - 0x221c));
MODULE_PARM_DESC(verinfo,
                 "\x56\x65\x72\x73\x69\x6f\x6e\x20\x6f\x66\x20\x74\x68\x65\x20"
                 "\x64\x72\x69\x76\x65\x72");
#define DATARMNET63ff5c35c2 (0xd26 + 209 - 0xdf6)
#define DATARMNETceae994093 (0xd1f + 216 - 0xdf5)
#define DATARMNET3412b803e1 (0xd18 + 223 - 0xdf4)
#define DATARMNET1efd633004 (0xd11 + 230 - 0xdf3)
#define DATARMNETdc217f1b29 (0xd0a + 237 - 0xdf2)
#define DATARMNETd0bce1573e (0xd03 + 244 - 0xdf1)
#define DATARMNETee209ff1f9 (0xd26 + 209 - 0xdf6)
#define DATARMNET24e4186a83 (0xd1f + 216 - 0xdf5)
#define DATARMNET94016043b8 (0xd18 + 223 - 0xdf4)
#define DATARMNET50dac65bef (0xd2d + 202 - 0xdf7)
#define DATARMNETe1763a8705 (0xbf7 + 4364 - 0x1c04)
#define DATARMNET3bc5e7094a (0xd0a + 237 - 0xdf2)
#define DATARMNET7b5bbaa047 ((0xd18 + 223 - 0xdf4))
#define DATARMNETfd026b105a (DATARMNET7b5bbaa047 * HZ)
#define DATARMNET65d0d735fa                            \
  ((0xdf7 + 6169 - 0x241c) * (0xdf7 + 2629 - 0x143c) * \
   (0xdf7 + 2629 - 0x143c) / (0xd35 + 210 - 0xdff) * DATARMNET7b5bbaa047)
#define DATARMNETb8ab933cae                            \
  ((0xc07 + 4861 - 0x1e3c) * (0xdf7 + 2629 - 0x143c) * \
   (0xdf7 + 2629 - 0x143c) / (0xd35 + 210 - 0xdff) * DATARMNET7b5bbaa047)
static const char* DATARMNETe5ef0e617c = "\x31\x2e\x32";
static u16 DATARMNET2fe4661b82;
static struct genl_info DATARMNET7d98961cbe;
static bool DATARMNET54b95e4416;
static u32 DATARMNETfef55eaf9a;
static u8 DATARMNET9628311a6b[DATARMNET3bc5e7094a] = {
    (0xd2d + 202 - 0xdf7), (0xd03 + 244 - 0xdf1), (0xcfc + 267 - 0xe00),
    (0xd35 + 210 - 0xdff), 9};
DEFINE_MUTEX(DATARMNETd7b5a80f84);
static DEFINE_SPINLOCK(DATARMNET33bd4139f4);
static LIST_HEAD(DATARMNET7520901fb5);
struct DATARMNETb356c61ad6 {
  struct rcu_head DATARMNET28bfe9e6ad;
  struct DATARMNETd51e57e3f4 DATARMNET54338da2ff;
};
struct DATARMNET6fd48c33f6 {
  struct rcu_head DATARMNET28bfe9e6ad;
  struct list_head DATARMNET14c01d3877;
  struct list_head DATARMNETed4d7b4a3c;
  struct DATARMNET5d4139d9d7 DATARMNET54338da2ff;
  struct DATARMNETb356c61ad6 __rcu* DATARMNET8f197b20f6;
  u32 DATARMNET556cdfb5eb;
  u32 DATARMNETee01ad514b;
  unsigned long expires;
  u64 DATARMNETa27e524d8a;
  bool DATARMNET626c626b74;
  bool DATARMNET40bb1d945b;
};
struct DATARMNETc4743b996e {
  struct rcu_head DATARMNET28bfe9e6ad;
  struct list_head DATARMNET46c1c4375f;
};
struct DATARMNET758277d429 {
  char DATARMNET91119c34ed;
  char DATARMNETecca9147fd[(0xcfc + 267 - 0xe00)];
  struct DATARMNETc4743b996e __rcu* DATARMNETac8d594fb6;
};
#define DATARMNET4e81d27dfb(DATARMNET413e8dcf7b)        \
  (!strncmp(DATARMNET413e8dcf7b->name,                  \
            "\x72\x6d\x6e\x65\x74\x5f\x64\x61\x74\x61", \
            (0xd27 + 224 - 0xdfd)))
#define DATARMNETe1c7654a2e(DATARMNET413e8dcf7b)                   \
                                                                   \
  ((struct DATARMNET758277d429*)(((struct rmnet_priv*)netdev_priv( \
                                      DATARMNET413e8dcf7b))        \
                                     ->aps_cb))
extern void (*rmnet_aps_pre_queue)(struct net_device* DATARMNET413e8dcf7b,
                                   struct sk_buff* DATARMNET543491eb0f);
extern int (*rmnet_aps_post_queue)(struct net_device* DATARMNET413e8dcf7b,
                                   struct sk_buff* DATARMNET543491eb0f);
extern struct genl_family DATARMNETcdba30eca9;
static void DATARMNET30dd480cad(struct net_device* DATARMNET413e8dcf7b,
                                struct sk_buff* DATARMNET543491eb0f);
static void DATARMNET446f780f19(u32 DATARMNETbb588401ec,
                                u8 DATARMNETf8bbe3b0fb);
static void DATARMNETf844db79d9(struct timer_list* DATARMNET6e4292679f);
static DEFINE_TIMER(DATARMNETd21629e047, DATARMNETf844db79d9);
static void DATARMNETd1a02b8188(struct work_struct* DATARMNET33110a3ff5);
static DECLARE_WORK(DATARMNET8e3aef0760, DATARMNETd1a02b8188);
static void DATARMNET5979020f87(struct work_struct* DATARMNET33110a3ff5);
static DECLARE_DELAYED_WORK(DATARMNET3481998252, DATARMNET5979020f87);
static int DATARMNET998f6cbce7(struct notifier_block* DATARMNET272c159b3c,
                               unsigned long DATARMNET9a4761f31c, void* data);
static struct notifier_block DATARMNETc580548769 __read_mostly = {
    .notifier_call = DATARMNET998f6cbce7,
    .priority = (0xd1f + 216 - 0xdf5),
};
struct DATARMNETf21ed5deb4 {
  __u8 DATARMNET06d2413ad2;
  __be32* saddr;
  __be32* daddr;
  __u16 sport;
  __u16 dport;
  __u32 DATARMNETe9aad463ce;
  __u8 tos;
};
static int DATARMNET481989429b(
    struct sk_buff* DATARMNET543491eb0f,
    struct DATARMNETf21ed5deb4* DATARMNET203a7a0136) {
  struct DATARMNET6d4c22c781 {
    __be16 sport;
    __be16 dport;
  };
  int DATARMNETb65c469a15;
  if (DATARMNET543491eb0f->protocol == htons(ETH_P_IP)) {
    struct iphdr *DATARMNET86f1f2cdc9, DATARMNET8dc568fa4c;
    DATARMNET86f1f2cdc9 = __skb_header_pointer(
        DATARMNET543491eb0f, (0xd2d + 202 - 0xdf7),
        sizeof(*DATARMNET86f1f2cdc9), DATARMNET543491eb0f->data,
        skb_headlen(DATARMNET543491eb0f), &DATARMNET8dc568fa4c);
    if (unlikely(!DATARMNET86f1f2cdc9 ||
                 DATARMNET86f1f2cdc9->ihl < (0xd0a + 237 - 0xdf2)))
      return -EINVAL;
    if (unlikely(ip_is_fragment(DATARMNET86f1f2cdc9))) return -EFAULT;
    DATARMNETb65c469a15 = DATARMNET86f1f2cdc9->ihl << (0xd1f + 216 - 0xdf5);
    DATARMNET203a7a0136->DATARMNET06d2413ad2 = DATARMNET86f1f2cdc9->protocol;
    DATARMNET203a7a0136->saddr = &DATARMNET86f1f2cdc9->saddr;
    DATARMNET203a7a0136->daddr = &DATARMNET86f1f2cdc9->daddr;
    DATARMNET203a7a0136->tos = DATARMNET86f1f2cdc9->tos;
  } else if (DATARMNET543491eb0f->protocol == htons(ETH_P_IPV6)) {
    struct ipv6hdr *DATARMNETbf55123e5b, DATARMNET9df40d3f99;
    DATARMNETbf55123e5b = __skb_header_pointer(
        DATARMNET543491eb0f, (0xd2d + 202 - 0xdf7),
        sizeof(*DATARMNETbf55123e5b), DATARMNET543491eb0f->data,
        skb_headlen(DATARMNET543491eb0f), &DATARMNET9df40d3f99);
    if (unlikely(!DATARMNETbf55123e5b)) return -EINVAL;
    if (unlikely(DATARMNETbf55123e5b->nexthdr == IPPROTO_FRAGMENT))
      return -EFAULT;
    DATARMNETb65c469a15 = sizeof(*DATARMNETbf55123e5b);
    DATARMNET203a7a0136->DATARMNET06d2413ad2 = DATARMNETbf55123e5b->nexthdr;
    DATARMNET203a7a0136->saddr = DATARMNETbf55123e5b->saddr.in6_u.u6_addr32;
    DATARMNET203a7a0136->daddr = DATARMNETbf55123e5b->daddr.in6_u.u6_addr32;
    DATARMNET203a7a0136->tos = ip6_tclass(ip6_flowinfo(DATARMNETbf55123e5b));
    DATARMNET203a7a0136->DATARMNETe9aad463ce =
        ntohl(ip6_flowlabel(DATARMNETbf55123e5b));
  } else {
    return -EINVAL;
  }
  if (DATARMNET203a7a0136->DATARMNET06d2413ad2 == IPPROTO_TCP ||
      DATARMNET203a7a0136->DATARMNET06d2413ad2 == IPPROTO_UDP) {
    struct DATARMNET6d4c22c781 *DATARMNET975b252236, DATARMNET7121c974d6;
    DATARMNET975b252236 = __skb_header_pointer(
        DATARMNET543491eb0f, DATARMNETb65c469a15, sizeof(*DATARMNET975b252236),
        DATARMNET543491eb0f->data, skb_headlen(DATARMNET543491eb0f),
        &DATARMNET7121c974d6);
    if (unlikely(!DATARMNET975b252236)) return -EINVAL;
    DATARMNET203a7a0136->sport = ntohs(DATARMNET975b252236->sport);
    DATARMNET203a7a0136->dport = ntohs(DATARMNET975b252236->dport);
  }
  return (0xd2d + 202 - 0xdf7);
}
static bool DATARMNETdf0ec0363b(
    struct DATARMNETd51e57e3f4* DATARMNET8f197b20f6,
    struct DATARMNETf21ed5deb4* DATARMNET203a7a0136) {
  if (DATARMNET8f197b20f6->DATARMNET06d2413ad2) {
    if (DATARMNET8f197b20f6->DATARMNET06d2413ad2 == (0xc07 + 4362 - 0x1c14)) {
      if (DATARMNET203a7a0136->DATARMNET06d2413ad2 != IPPROTO_TCP &&
          DATARMNET203a7a0136->DATARMNET06d2413ad2 != IPPROTO_UDP)
        return false;
    } else if (DATARMNET8f197b20f6->DATARMNET06d2413ad2 !=
               DATARMNET203a7a0136->DATARMNET06d2413ad2) {
      return false;
    }
  }
  if (DATARMNET203a7a0136->DATARMNET06d2413ad2 == IPPROTO_TCP ||
      DATARMNET203a7a0136->DATARMNET06d2413ad2 == IPPROTO_UDP) {
    if ((DATARMNET8f197b20f6->dport &&
         DATARMNET8f197b20f6->dport != DATARMNET203a7a0136->dport) ||
        (DATARMNET8f197b20f6->sport &&
         DATARMNET8f197b20f6->sport != DATARMNET203a7a0136->sport))
      return false;
  }
  if (DATARMNET8f197b20f6->DATARMNET61b4abcc9b == AF_INET) {
    if (((DATARMNET8f197b20f6->DATARMNET0711bbda6c & DATARMNET3cff03c531) &&
         DATARMNET8f197b20f6->daddr[(0xd2d + 202 - 0xdf7)] !=
             *DATARMNET203a7a0136->daddr) ||
        ((DATARMNET8f197b20f6->DATARMNET0711bbda6c & DATARMNET53f589a196) &&
         DATARMNET8f197b20f6->saddr[(0xd2d + 202 - 0xdf7)] !=
             *DATARMNET203a7a0136->saddr))
      return false;
    if (DATARMNET8f197b20f6->tos &&
        DATARMNET8f197b20f6->tos != (DATARMNET203a7a0136->tos &
                                     DATARMNET8f197b20f6->DATARMNETa400ad4f72))
      return false;
  } else if (DATARMNET8f197b20f6->DATARMNET61b4abcc9b == AF_INET6) {
    if (((DATARMNET8f197b20f6->DATARMNET0711bbda6c & DATARMNET3cff03c531) &&
         memcmp(DATARMNET8f197b20f6->daddr, DATARMNET203a7a0136->daddr,
                (0xeb7 + 1158 - 0x132d))) ||
        ((DATARMNET8f197b20f6->DATARMNET0711bbda6c & DATARMNET53f589a196) &&
         memcmp(DATARMNET8f197b20f6->saddr, DATARMNET203a7a0136->saddr,
                (0xeb7 + 1158 - 0x132d))))
      return false;
    if (DATARMNET8f197b20f6->tos &&
        DATARMNET8f197b20f6->tos != (DATARMNET203a7a0136->tos &
                                     DATARMNET8f197b20f6->DATARMNETa400ad4f72))
      return false;
    if (DATARMNET8f197b20f6->DATARMNETe9aad463ce &&
        DATARMNET8f197b20f6->DATARMNETe9aad463ce !=
            DATARMNET203a7a0136->DATARMNETe9aad463ce)
      return false;
  } else {
    return false;
  }
  return true;
}
static struct DATARMNET6fd48c33f6* DATARMNETfb13c018fc(
    struct list_head* DATARMNET817a8d238c,
    struct sk_buff* DATARMNET543491eb0f) {
  struct DATARMNETf21ed5deb4 DATARMNET203a7a0136 = {
      (0xd2d + 202 - 0xdf7),
  };
  struct DATARMNET6fd48c33f6* DATARMNETaa568481cf;
  struct DATARMNETb356c61ad6* DATARMNET8f197b20f6;
  bool DATARMNETc9657a740d = false;
  list_for_each_entry_rcu(DATARMNETaa568481cf, DATARMNET817a8d238c,
                          DATARMNET14c01d3877) {
    DATARMNET8f197b20f6 =
        rcu_dereference(DATARMNETaa568481cf->DATARMNET8f197b20f6);
    if (unlikely(!DATARMNET8f197b20f6)) continue;
    if ((DATARMNET8f197b20f6->DATARMNET54338da2ff.DATARMNET61b4abcc9b ==
             AF_INET &&
         DATARMNET543491eb0f->protocol != htons(ETH_P_IP)) ||
        (DATARMNET8f197b20f6->DATARMNET54338da2ff.DATARMNET61b4abcc9b ==
             AF_INET6 &&
         DATARMNET543491eb0f->protocol != htons(ETH_P_IPV6)))
      continue;
    if (!DATARMNETc9657a740d) {
      if (DATARMNET481989429b(DATARMNET543491eb0f, &DATARMNET203a7a0136)) break;
      DATARMNETc9657a740d = true;
    }
    if (DATARMNETdf0ec0363b(&DATARMNET8f197b20f6->DATARMNET54338da2ff,
                            &DATARMNET203a7a0136))
      return DATARMNETaa568481cf;
  }
  return NULL;
}
static struct DATARMNET6fd48c33f6* DATARMNET3ed11fdc8d(
    struct list_head* DATARMNET817a8d238c, u32 DATARMNETbb588401ec) {
  struct DATARMNET6fd48c33f6* DATARMNETaa568481cf;
  list_for_each_entry_rcu(DATARMNETaa568481cf, DATARMNET817a8d238c,
                          DATARMNET14c01d3877) {
    if (DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec ==
        DATARMNETbb588401ec)
      return DATARMNETaa568481cf;
  }
  return NULL;
}
static void DATARMNET1e616c2160(
    struct list_head* DATARMNET817a8d238c,
    struct DATARMNET6fd48c33f6* DATARMNETaa568481cf) {
  list_add_rcu(&DATARMNETaa568481cf->DATARMNET14c01d3877, DATARMNET817a8d238c);
  list_add(&DATARMNETaa568481cf->DATARMNETed4d7b4a3c, &DATARMNET7520901fb5);
  DATARMNETfef55eaf9a++;
  if (DATARMNETaa568481cf->expires) {
    if (!timer_pending(&DATARMNETd21629e047) ||
        time_before(DATARMNETaa568481cf->expires, DATARMNETd21629e047.expires))
      mod_timer(&DATARMNETd21629e047, DATARMNETaa568481cf->expires);
  }
  DATARMNET112d724eff(
      "aps: flow 0x%x added (%u)\n",
      DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec,
      DATARMNETfef55eaf9a);
}
static void DATARMNET7fa3dd63cb(
    struct DATARMNET6fd48c33f6* DATARMNETaa568481cf) {
  struct DATARMNETb356c61ad6* DATARMNET8f197b20f6;
  list_del_rcu(&DATARMNETaa568481cf->DATARMNET14c01d3877);
  list_del(&DATARMNETaa568481cf->DATARMNETed4d7b4a3c);
  if (likely(DATARMNETfef55eaf9a)) DATARMNETfef55eaf9a--;
  if (!DATARMNETfef55eaf9a) del_timer(&DATARMNETd21629e047);
  DATARMNET112d724eff(
      "\x61\x70\x73\x3a\x20\x66\x6c\x6f\x77\x20\x30\x78\x25\x78\x20\x72\x65\x6d"
      "\x6f\x76\x69\x6e\x67\x20\x28\x25\x75\x29"
      "\n",
      DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec,
      DATARMNETfef55eaf9a);
  DATARMNET8f197b20f6 =
      rcu_dereference(DATARMNETaa568481cf->DATARMNET8f197b20f6);
  if (DATARMNET8f197b20f6) {
    rcu_assign_pointer(DATARMNETaa568481cf->DATARMNET8f197b20f6, NULL);
    kfree_rcu(DATARMNETaa568481cf->DATARMNET8f197b20f6, DATARMNET28bfe9e6ad);
  }
  kfree_rcu(DATARMNETaa568481cf, DATARMNET28bfe9e6ad);
}
static void DATARMNET9ac8a34003(void) {
  struct DATARMNET6fd48c33f6 *DATARMNETaa568481cf, *DATARMNET0386f6f82a;
  list_for_each_entry_safe(DATARMNETaa568481cf, DATARMNET0386f6f82a,
                           &DATARMNET7520901fb5, DATARMNETed4d7b4a3c) {
    DATARMNET7fa3dd63cb(DATARMNETaa568481cf);
  }
  DATARMNET112d724eff(
      "\x61\x70\x73\x3a\x20\x61\x6c\x6c\x20\x66\x6c\x6f\x77\x73\x20\x72\x65\x6d"
      "\x6f\x76\x65\x64"
      "\n");
}
static void DATARMNET250448eb06(int ifindex) {
  struct DATARMNET6fd48c33f6 *DATARMNETaa568481cf, *DATARMNET0386f6f82a;
  list_for_each_entry_safe(DATARMNETaa568481cf, DATARMNET0386f6f82a,
                           &DATARMNET7520901fb5, DATARMNETed4d7b4a3c) {
    if (DATARMNETaa568481cf->DATARMNET54338da2ff.ifindex == ifindex) {
      DATARMNET112d724eff(
          "\x61\x70\x73\x3a\x20\x66\x6c\x6f\x77\x20\x30\x78\x25\x78\x20\x64\x6f"
          "\x77\x6e"
          "\n",
          DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec);
      DATARMNET446f780f19(
          DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec,
          DATARMNET24e4186a83);
      DATARMNET7fa3dd63cb(DATARMNETaa568481cf);
    }
  }
}
static void DATARMNETd1a02b8188(struct work_struct* DATARMNET33110a3ff5) {
  struct DATARMNET6fd48c33f6 *DATARMNETaa568481cf, *DATARMNET0386f6f82a;
  unsigned long DATARMNET02dfdbc38d = jiffies;
  unsigned long DATARMNET2cf3deab22;
  u32 DATARMNETbb588401ec;
  DATARMNET2cf3deab22 = DATARMNET02dfdbc38d;
  mutex_lock(&DATARMNETd7b5a80f84);
  if (!DATARMNET54b95e4416) goto DATARMNETbf4095f79e;
  spin_lock_bh(&DATARMNET33bd4139f4);
  list_for_each_entry_safe(DATARMNETaa568481cf, DATARMNET0386f6f82a,
                           &DATARMNET7520901fb5, DATARMNETed4d7b4a3c) {
    if (!DATARMNETaa568481cf->expires) continue;
    if (time_before_eq(DATARMNETaa568481cf->expires, DATARMNET02dfdbc38d)) {
      DATARMNETbb588401ec =
          DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec;
      DATARMNET112d724eff(
          "\x61\x70\x73\x3a\x20\x66\x6c\x6f\x77\x20\x30\x78\x25\x78\x20\x65\x78"
          "\x70\x69\x72\x65\x64"
          "\n",
          DATARMNETbb588401ec);
      DATARMNET7fa3dd63cb(DATARMNETaa568481cf);
      DATARMNET446f780f19(DATARMNETbb588401ec, DATARMNETee209ff1f9);
    } else if (DATARMNET2cf3deab22 == DATARMNET02dfdbc38d ||
               time_before(DATARMNETaa568481cf->expires, DATARMNET2cf3deab22)) {
      DATARMNET2cf3deab22 = DATARMNETaa568481cf->expires;
    }
  }
  if (DATARMNET2cf3deab22 != DATARMNET02dfdbc38d)
    mod_timer(&DATARMNETd21629e047, DATARMNET2cf3deab22);
  spin_unlock_bh(&DATARMNET33bd4139f4);
DATARMNETbf4095f79e:
  mutex_unlock(&DATARMNETd7b5a80f84);
}
static void DATARMNETf844db79d9(struct timer_list* DATARMNET6e4292679f) {
  schedule_work(&DATARMNET8e3aef0760);
}
static void DATARMNET3281082da4(
    struct DATARMNET6fd48c33f6* DATARMNETaa568481cf) {
  u32 DATARMNET556cdfb5eb;
  DATARMNET556cdfb5eb = RMNET_APS_MAJOR << (0xeb7 + 1158 - 0x132d);
  if (DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNET6c2cba039d >=
      DATARMNET3bc5e7094a)
    DATARMNET556cdfb5eb |= DATARMNET9628311a6b[(0xd2d + 202 - 0xdf7)];
  else
    DATARMNET556cdfb5eb |=
        DATARMNET9628311a6b[DATARMNETaa568481cf->DATARMNET54338da2ff
                                .DATARMNET6c2cba039d];
  if (DATARMNETaa568481cf->DATARMNET626c626b74)
    DATARMNET556cdfb5eb |= RMNET_APS_LLC_MASK;
  if (DATARMNETaa568481cf->DATARMNET40bb1d945b)
    DATARMNET556cdfb5eb |= RMNET_APS_LLB_MASK;
  DATARMNETaa568481cf->DATARMNET556cdfb5eb = DATARMNET556cdfb5eb;
}
static int DATARMNET772c0b87c5(void* DATARMNETe823dcf978,
                               const struct list_head* DATARMNET9cf7d31274,
                               const struct list_head* DATARMNET5444bd3b6f) {
  struct DATARMNET6fd48c33f6* DATARMNET40e125212a;
  struct DATARMNET6fd48c33f6* DATARMNETdcaff77beb;
  DATARMNET40e125212a = list_entry(
      DATARMNET9cf7d31274, struct DATARMNET6fd48c33f6, DATARMNETed4d7b4a3c);
  DATARMNETdcaff77beb = list_entry(
      DATARMNET5444bd3b6f, struct DATARMNET6fd48c33f6, DATARMNETed4d7b4a3c);
  return DATARMNET40e125212a->DATARMNETa27e524d8a >
         DATARMNETdcaff77beb->DATARMNETa27e524d8a;
}
static void DATARMNET5979020f87(struct work_struct* DATARMNET33110a3ff5) {
  struct DATARMNET6fd48c33f6* DATARMNETaa568481cf;
  u64 DATARMNETf78537d374 = (0xd2d + 202 - 0xdf7);
  u64 DATARMNETd39b09fa66 = (0xd2d + 202 - 0xdf7);
  u64 DATARMNETedd419d6e2;
  bool DATARMNETd3eb49eab3 = false;
  mutex_lock(&DATARMNETd7b5a80f84);
  if (!DATARMNET54b95e4416) goto DATARMNETbf4095f79e;
  spin_lock_bh(&DATARMNET33bd4139f4);
  list_sort(NULL, &DATARMNET7520901fb5, DATARMNET772c0b87c5);
  list_for_each_entry(DATARMNETaa568481cf, &DATARMNET7520901fb5,
                      DATARMNETed4d7b4a3c) {
    if (DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNET626c626b74) {
      DATARMNETedd419d6e2 =
          DATARMNETf78537d374 + DATARMNETaa568481cf->DATARMNETa27e524d8a;
      if (DATARMNETedd419d6e2 < DATARMNET65d0d735fa) {
        DATARMNETaa568481cf->DATARMNET626c626b74 = true;
        DATARMNETaa568481cf->DATARMNET556cdfb5eb |= RMNET_APS_LLC_MASK;
        DATARMNETf78537d374 = DATARMNETedd419d6e2;
      } else {
        DATARMNETaa568481cf->DATARMNET626c626b74 = false;
        DATARMNETaa568481cf->DATARMNET556cdfb5eb &= ~RMNET_APS_LLC_MASK;
      }
      DATARMNET112d724eff(
          "\x61\x70\x73\x3a\x20\x66\x6c\x6f\x77\x20\x30\x78\x25\x78\x20\x74\x78"
          "\x5f\x62\x79\x74\x65\x73\x20\x25\x6c\x6c\x75\x20\x6c\x6c\x63\x20\x25"
          "\x64\x20\x6c\x6c\x63\x5f\x62\x79\x74\x65\x73\x20"
          "\x25\x6c\x6c\x75"
          "\n",
          DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec,
          DATARMNETaa568481cf->DATARMNETa27e524d8a,
          DATARMNETaa568481cf->DATARMNET626c626b74, DATARMNETf78537d374);
    }
    if (DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNET40bb1d945b) {
      DATARMNETedd419d6e2 =
          DATARMNETd39b09fa66 + DATARMNETaa568481cf->DATARMNETa27e524d8a;
      if (DATARMNETedd419d6e2 < DATARMNETb8ab933cae) {
        DATARMNETaa568481cf->DATARMNET40bb1d945b = true;
        DATARMNETaa568481cf->DATARMNET556cdfb5eb |= RMNET_APS_LLB_MASK;
        DATARMNETd39b09fa66 = DATARMNETedd419d6e2;
      } else {
        DATARMNETaa568481cf->DATARMNET40bb1d945b = false;
        DATARMNETaa568481cf->DATARMNET556cdfb5eb &= ~RMNET_APS_LLB_MASK;
      }
      DATARMNET112d724eff(
          "\x61\x70\x73\x3a\x20\x66\x6c\x6f\x77\x20\x30\x78\x25\x78\x20\x74\x78"
          "\x5f\x62\x79\x74\x65\x73\x20\x25\x6c\x6c\x75\x20\x6c\x6c\x62\x20\x25"
          "\x64\x20\x6c\x6c\x62\x5f\x62\x79\x74\x65\x73\x20"
          "\x25\x6c\x6c\x75"
          "\n",
          DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec,
          DATARMNETaa568481cf->DATARMNETa27e524d8a,
          DATARMNETaa568481cf->DATARMNET40bb1d945b, DATARMNETd39b09fa66);
    }
    if (DATARMNETaa568481cf->DATARMNETa27e524d8a) {
      DATARMNETd3eb49eab3 = true;
      DATARMNETaa568481cf->DATARMNETa27e524d8a = (0xd2d + 202 - 0xdf7);
    }
  }
  spin_unlock_bh(&DATARMNET33bd4139f4);
DATARMNETbf4095f79e:
  mutex_unlock(&DATARMNETd7b5a80f84);
  if (DATARMNETd3eb49eab3)
    schedule_delayed_work(&DATARMNET3481998252, DATARMNETfd026b105a);
}
static int DATARMNET82d65f9ca6(
    struct list_head* DATARMNET817a8d238c,
    struct DATARMNET5d4139d9d7* DATARMNETddcafd8b91) {
  struct DATARMNET6fd48c33f6* DATARMNETaa568481cf;
  DATARMNETaa568481cf = DATARMNET3ed11fdc8d(
      DATARMNET817a8d238c, DATARMNETddcafd8b91->DATARMNETbb588401ec);
  if (DATARMNETddcafd8b91->cmd == DATARMNET3412b803e1) {
    if (DATARMNETaa568481cf) DATARMNET7fa3dd63cb(DATARMNETaa568481cf);
    return (0xd2d + 202 - 0xdf7);
  }
  if (DATARMNETddcafd8b91->cmd == DATARMNETceae994093 && DATARMNETaa568481cf) {
    DATARMNET7fa3dd63cb(DATARMNETaa568481cf);
    DATARMNETaa568481cf = NULL;
  }
  if (!DATARMNETaa568481cf) {
    if (DATARMNETfef55eaf9a >= DATARMNETe1763a8705) {
      DATARMNET112d724eff(
          "\x61\x70\x73\x3a\x20\x66\x6c\x6f\x77\x20\x63\x6f\x75\x6e\x74\x20\x25"
          "\x75\x20\x65\x78\x63\x65\x65\x64\x73\x20\x6d\x61\x78"
          "\n",
          DATARMNETfef55eaf9a);
      return -EINVAL;
    }
    DATARMNETaa568481cf = kzalloc(sizeof(*DATARMNETaa568481cf), GFP_KERNEL);
    if (!DATARMNETaa568481cf) {
      DATARMNET112d724eff(
          "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79"
          "\n");
      return -ENOMEM;
    }
    memcpy(&DATARMNETaa568481cf->DATARMNET54338da2ff, DATARMNETddcafd8b91,
           sizeof(DATARMNETaa568481cf->DATARMNET54338da2ff));
    DATARMNETaa568481cf->DATARMNET626c626b74 =
        DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNET626c626b74;
    DATARMNETaa568481cf->DATARMNET40bb1d945b =
        DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNET40bb1d945b;
    DATARMNET3281082da4(DATARMNETaa568481cf);
    if (DATARMNETddcafd8b91->DATARMNET655f822a62) {
      DATARMNETaa568481cf->DATARMNETee01ad514b =
          DATARMNETddcafd8b91->DATARMNET655f822a62 * HZ;
      DATARMNETaa568481cf->expires =
          jiffies + DATARMNETaa568481cf->DATARMNETee01ad514b;
    }
    DATARMNET1e616c2160(DATARMNET817a8d238c, DATARMNETaa568481cf);
  } else {
    spin_lock_bh(&DATARMNET33bd4139f4);
    memcpy(&DATARMNETaa568481cf->DATARMNET54338da2ff, DATARMNETddcafd8b91,
           sizeof(DATARMNETaa568481cf->DATARMNET54338da2ff));
    DATARMNETaa568481cf->DATARMNET626c626b74 =
        DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNET626c626b74;
    DATARMNETaa568481cf->DATARMNET40bb1d945b =
        DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNET40bb1d945b;
    DATARMNET3281082da4(DATARMNETaa568481cf);
    spin_unlock_bh(&DATARMNET33bd4139f4);
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x66\x6c\x6f\x77\x20\x30\x78\x25\x78\x20\x75\x70"
        "\x64\x61\x74\x65\x64"
        "\n",
        DATARMNETaa568481cf->DATARMNET54338da2ff.DATARMNETbb588401ec);
  }
  return (0xd2d + 202 - 0xdf7);
}
static int DATARMNETbd1d5c8f28(struct genl_info* DATARMNET54338da2ff, u8 cmd,
                               int DATARMNETbc8c3c13e8, int DATARMNET5d9df1c423,
                               void* DATARMNET8dad72c67a, gfp_t flags) {
  struct sk_buff* DATARMNET543491eb0f;
  void* DATARMNETd7f97e2e5a;
  int DATARMNETb14e52a504;
  if (unlikely(!DATARMNET54338da2ff)) return -EINVAL;
  DATARMNET543491eb0f = genlmsg_new(nla_total_size(DATARMNET5d9df1c423), flags);
  if (!DATARMNET543491eb0f) goto DATARMNETbf4095f79e;
  DATARMNETd7f97e2e5a =
      genlmsg_put(DATARMNET543491eb0f, (0xd2d + 202 - 0xdf7),
                  DATARMNET54338da2ff->snd_seq + (0xd26 + 209 - 0xdf6),
                  &DATARMNETcdba30eca9, (0xd2d + 202 - 0xdf7), cmd);
  if (!DATARMNETd7f97e2e5a) goto DATARMNETbf4095f79e;
  DATARMNETb14e52a504 = nla_put(DATARMNET543491eb0f, DATARMNETbc8c3c13e8,
                                DATARMNET5d9df1c423, DATARMNET8dad72c67a);
  if (DATARMNETb14e52a504 != (0xd2d + 202 - 0xdf7)) goto DATARMNETbf4095f79e;
  genlmsg_end(DATARMNET543491eb0f, DATARMNETd7f97e2e5a);
  DATARMNETb14e52a504 =
      genlmsg_unicast(genl_info_net(DATARMNET54338da2ff), DATARMNET543491eb0f,
                      DATARMNET54338da2ff->snd_portid);
  if (DATARMNETb14e52a504 != (0xd2d + 202 - 0xdf7)) goto DATARMNETbf4095f79e;
  return (0xd2d + 202 - 0xdf7);
DATARMNETbf4095f79e:
  DATARMNET112d724eff(
      "\x61\x70\x73\x3a\x20\x46\x41\x49\x4c\x45\x44\x20\x74\x6f\x20\x73\x65\x6e"
      "\x64\x20\x6d\x73\x67\x20\x25\x64"
      "\n",
      cmd);
  return -EFAULT;
}
static void DATARMNET446f780f19(u32 DATARMNETbb588401ec,
                                u8 DATARMNETf8bbe3b0fb) {
  struct DATARMNETca79857d4a DATARMNETa13fcf9070;
  if (!DATARMNET7d98961cbe.snd_portid) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x63\x6c\x69\x65\x6e\x74\x20\x6e\x6f\x74\x20\x63"
        "\x6f\x6e\x6e\x65\x63\x74\x65\x64"
        "\n");
    return;
  }
  DATARMNETa13fcf9070.cmd = DATARMNETdc217f1b29;
  DATARMNETa13fcf9070.DATARMNETe65883bfce = DATARMNETf8bbe3b0fb;
  DATARMNETa13fcf9070.DATARMNETbb588401ec = DATARMNETbb588401ec;
  if (DATARMNETbd1d5c8f28(&DATARMNET7d98961cbe, DATARMNET15437be67e,
                          DATARMNET818a0b6438, sizeof(DATARMNETa13fcf9070),
                          &DATARMNETa13fcf9070, GFP_ATOMIC)) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x63\x6c\x69\x65\x6e\x74\x20\x73\x65\x6e\x64\x20"
        "\x66\x61\x69\x6c\x65\x64\x2e\x20\x64\x69\x73\x61\x62\x6c\x65\x20\x63"
        "\x6c\x69\x65\x6e\x74"
        "\n");
    DATARMNET7d98961cbe.snd_portid = (0xd2d + 202 - 0xdf7);
  }
}
static void DATARMNET30dd480cad(struct net_device* DATARMNET413e8dcf7b,
                                struct sk_buff* DATARMNET543491eb0f) {
  struct DATARMNET6fd48c33f6* DATARMNETaa568481cf;
  struct DATARMNET758277d429* aps_cb;
  struct DATARMNETc4743b996e* DATARMNET81b03d6be4;
  if (DATARMNET2fe4661b82 &&
      (DATARMNET543491eb0f->priority >> (0xeb7 + 1158 - 0x132d) !=
       DATARMNET2fe4661b82))
    return;
  aps_cb = DATARMNETe1c7654a2e(DATARMNET413e8dcf7b);
  DATARMNET81b03d6be4 = rcu_dereference(aps_cb->DATARMNETac8d594fb6);
  if (!DATARMNET81b03d6be4) return;
  if (DATARMNET2fe4661b82)
    DATARMNETaa568481cf =
        DATARMNET3ed11fdc8d(&DATARMNET81b03d6be4->DATARMNET46c1c4375f,
                            DATARMNET543491eb0f->priority);
  else
    DATARMNETaa568481cf = DATARMNETfb13c018fc(
        &DATARMNET81b03d6be4->DATARMNET46c1c4375f, DATARMNET543491eb0f);
  if (DATARMNETaa568481cf) {
    spin_lock_bh(&DATARMNET33bd4139f4);
    DATARMNET543491eb0f->priority = DATARMNETaa568481cf->DATARMNET556cdfb5eb;
    DATARMNETaa568481cf->expires =
        jiffies + DATARMNETaa568481cf->DATARMNETee01ad514b;
    DATARMNETaa568481cf->DATARMNETa27e524d8a += DATARMNET543491eb0f->len;
    spin_unlock_bh(&DATARMNET33bd4139f4);
    schedule_delayed_work(&DATARMNET3481998252, DATARMNETfd026b105a);
  }
}
static int DATARMNET998f6cbce7(struct notifier_block* DATARMNET272c159b3c,
                               unsigned long DATARMNET9a4761f31c, void* data) {
  struct net_device* DATARMNET413e8dcf7b;
  struct DATARMNET758277d429* aps_cb;
  struct DATARMNETc4743b996e* DATARMNET81b03d6be4;
  DATARMNET413e8dcf7b = netdev_notifier_info_to_dev(data);
  if (unlikely(!DATARMNET413e8dcf7b)) return NOTIFY_DONE;
  if (!DATARMNET4e81d27dfb(DATARMNET413e8dcf7b)) return NOTIFY_DONE;
  aps_cb = DATARMNETe1c7654a2e(DATARMNET413e8dcf7b);
  BUILD_BUG_ON(sizeof(*aps_cb) >
               sizeof(((struct rmnet_priv*)(0xd2d + 202 - 0xdf7))->aps_cb));
  switch (DATARMNET9a4761f31c) {
    case NETDEV_DOWN:
      aps_cb->DATARMNET91119c34ed = (0xd2d + 202 - 0xdf7);
      mutex_lock(&DATARMNETd7b5a80f84);
      DATARMNET250448eb06(DATARMNET413e8dcf7b->ifindex);
      mutex_unlock(&DATARMNETd7b5a80f84);
      break;
    case NETDEV_UNREGISTER:
      mutex_lock(&DATARMNETd7b5a80f84);
      DATARMNET250448eb06(DATARMNET413e8dcf7b->ifindex);
      DATARMNET81b03d6be4 = rcu_dereference(aps_cb->DATARMNETac8d594fb6);
      if (DATARMNET81b03d6be4) {
        WARN_ON(!list_empty(&DATARMNET81b03d6be4->DATARMNET46c1c4375f));
        rcu_assign_pointer(aps_cb->DATARMNETac8d594fb6, NULL);
        kfree_rcu(DATARMNET81b03d6be4, DATARMNET28bfe9e6ad);
      }
      mutex_unlock(&DATARMNETd7b5a80f84);
      break;
    default:
      break;
  }
  return NOTIFY_DONE;
}
int DATARMNET37a9efbbcb(struct sk_buff* DATARMNETaafc1d9519,
                        struct genl_info* DATARMNET54338da2ff) {
  struct nlattr* DATARMNET9c5e00ef03;
  struct DATARMNET5d4139d9d7 DATARMNETddcafd8b91;
  struct DATARMNETca79857d4a DATARMNETa13fcf9070;
  struct net_device* DATARMNET413e8dcf7b = NULL;
  struct DATARMNET758277d429* aps_cb;
  struct DATARMNETc4743b996e* DATARMNET81b03d6be4;
  int DATARMNETb14e52a504 = -EINVAL;
  DATARMNET112d724eff(
      "\x61\x70\x73\x3a\x20\x25\x73"
      "\n",
      __func__);
  if (!DATARMNET54338da2ff) return -EINVAL;
  DATARMNET9c5e00ef03 = DATARMNET54338da2ff->attrs[DATARMNET98b93f2e86];
  if (!DATARMNET9c5e00ef03) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x61\x74\x74\x72\x73"
        "\n");
    return -EINVAL;
  }
  if (nla_memcpy(&DATARMNETddcafd8b91, DATARMNET9c5e00ef03,
                 sizeof(DATARMNETddcafd8b91)) <= (0xd2d + 202 - 0xdf7)) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x6e\x6c\x61\x5f\x6d\x65\x6d\x63\x70\x79\x20\x66"
        "\x61\x69\x6c\x65\x64"
        "\n");
    return -EINVAL;
  }
  mutex_lock(&DATARMNETd7b5a80f84);
  if (!DATARMNET54b95e4416) goto DATARMNETbf4095f79e;
  switch (DATARMNETddcafd8b91.cmd) {
    case DATARMNET63ff5c35c2:
      DATARMNET7d98961cbe = *DATARMNET54338da2ff;
      DATARMNET9ac8a34003();
      DATARMNET2fe4661b82 = (u16)DATARMNETddcafd8b91.DATARMNETbb588401ec;
      DATARMNET112d724eff(
          "\x61\x70\x73\x3a\x20\x63\x6c\x69\x65\x6e\x74\x20\x69\x6e\x69\x74\x20"
          "\x63\x6f\x6f\x6b\x69\x65\x20\x30\x78\x25\x78"
          "\n",
          DATARMNET2fe4661b82);
      DATARMNETb14e52a504 = (0xd2d + 202 - 0xdf7);
      break;
    case DATARMNETceae994093:
    case DATARMNET3412b803e1:
    case DATARMNET1efd633004:
      if (DATARMNETddcafd8b91.ifindex)
        DATARMNET413e8dcf7b =
            dev_get_by_index(&init_net, DATARMNETddcafd8b91.ifindex);
      if (!DATARMNET413e8dcf7b) {
        DATARMNET112d724eff(
            "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x64\x65\x76\x20\x66\x6f\x72\x20"
            "\x69\x66\x69\x6e\x64\x65\x78\x20\x25\x75"
            "\n",
            DATARMNETddcafd8b91.ifindex);
        break;
      }
      if (DATARMNET4e81d27dfb(DATARMNET413e8dcf7b)) {
        aps_cb = DATARMNETe1c7654a2e(DATARMNET413e8dcf7b);
        DATARMNET81b03d6be4 = rcu_dereference(aps_cb->DATARMNETac8d594fb6);
        if (!DATARMNET81b03d6be4 &&
            DATARMNETddcafd8b91.cmd == DATARMNETceae994093) {
          DATARMNET81b03d6be4 =
              kzalloc(sizeof(*DATARMNET81b03d6be4), GFP_KERNEL);
          if (DATARMNET81b03d6be4) {
            INIT_LIST_HEAD(&DATARMNET81b03d6be4->DATARMNET46c1c4375f);
            rcu_assign_pointer(aps_cb->DATARMNETac8d594fb6,
                               DATARMNET81b03d6be4);
          } else {
            DATARMNET112d724eff(
                "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79"
                "\n");
          }
        }
        if (DATARMNET81b03d6be4)
          DATARMNETb14e52a504 = DATARMNET82d65f9ca6(
              &DATARMNET81b03d6be4->DATARMNET46c1c4375f, &DATARMNETddcafd8b91);
        else
          DATARMNET112d724eff(
              "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x66\x6c\x6f\x77\x20\x6c\x69\x73"
              "\x74\x20\x66\x6f\x72\x20\x66\x6c\x6f\x77\x20\x72\x65\x71"
              "\n");
      }
      dev_put(DATARMNET413e8dcf7b);
      break;
    default:
      break;
  }
DATARMNETbf4095f79e:
  mutex_unlock(&DATARMNETd7b5a80f84);
  DATARMNETa13fcf9070.cmd = DATARMNETddcafd8b91.cmd;
  DATARMNETa13fcf9070.DATARMNETe65883bfce = DATARMNETb14e52a504;
  DATARMNETa13fcf9070.DATARMNETbb588401ec =
      DATARMNETddcafd8b91.DATARMNETbb588401ec;
  DATARMNETb14e52a504 = DATARMNETbd1d5c8f28(
      DATARMNET54338da2ff, DATARMNET15437be67e, DATARMNET818a0b6438,
      sizeof(DATARMNETa13fcf9070), &DATARMNETa13fcf9070, GFP_KERNEL);
  return DATARMNETb14e52a504;
}
static int DATARMNET9e18f3d501(
    struct list_head* DATARMNET817a8d238c,
    struct DATARMNETd51e57e3f4* DATARMNETddcafd8b91) {
  struct DATARMNET6fd48c33f6* DATARMNETaa568481cf;
  struct DATARMNETb356c61ad6* DATARMNET8f197b20f6;
  DATARMNETaa568481cf = DATARMNET3ed11fdc8d(
      DATARMNET817a8d238c, DATARMNETddcafd8b91->DATARMNETbb588401ec);
  if (!DATARMNETaa568481cf) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x66\x6c\x6f\x77\x20\x30\x78\x25\x78\x20\x6e\x6f"
        "\x74\x20\x66\x6f\x75\x6e\x64"
        "\n",
        DATARMNETddcafd8b91->DATARMNETbb588401ec);
    return -EINVAL;
  }
  switch (DATARMNETddcafd8b91->cmd) {
    case DATARMNETd0bce1573e:
      DATARMNET8f197b20f6 =
          rcu_dereference(DATARMNETaa568481cf->DATARMNET8f197b20f6);
      if (DATARMNET8f197b20f6) {
        DATARMNET112d724eff(
            "\x61\x70\x73\x3a\x20\x66\x69\x6c\x74\x65\x72\x20\x66\x6f\x72\x20"
            "\x66\x6c\x6f\x77\x20\x30\x78\x25\x78\x20\x65\x78\x69\x73\x74\x73"
            "\n",
            DATARMNETddcafd8b91->DATARMNETbb588401ec);
        return -EINVAL;
      }
      DATARMNET8f197b20f6 = kzalloc(sizeof(*DATARMNET8f197b20f6), GFP_KERNEL);
      if (!DATARMNET8f197b20f6) {
        DATARMNET112d724eff(
            "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79"
            "\n");
        return -ENOMEM;
      }
      memcpy(&DATARMNET8f197b20f6->DATARMNET54338da2ff, DATARMNETddcafd8b91,
             sizeof(*DATARMNETddcafd8b91));
      if (DATARMNET8f197b20f6->DATARMNET54338da2ff.tos) {
        if (!DATARMNET8f197b20f6->DATARMNET54338da2ff.DATARMNETa400ad4f72)
          DATARMNET8f197b20f6->DATARMNET54338da2ff.DATARMNETa400ad4f72 =
              (0xbf7 + 4364 - 0x1c04);
        DATARMNET8f197b20f6->DATARMNET54338da2ff.tos &=
            DATARMNET8f197b20f6->DATARMNET54338da2ff.DATARMNETa400ad4f72;
      }
      rcu_assign_pointer(DATARMNETaa568481cf->DATARMNET8f197b20f6,
                         DATARMNET8f197b20f6);
      break;
    default:
      return -EINVAL;
  }
  return (0xd2d + 202 - 0xdf7);
}
int DATARMNETae6b282c61(struct sk_buff* DATARMNETaafc1d9519,
                        struct genl_info* DATARMNET54338da2ff) {
  struct nlattr* DATARMNET9c5e00ef03;
  struct DATARMNETd51e57e3f4 DATARMNETddcafd8b91;
  struct DATARMNET15bcb4844b DATARMNETa13fcf9070;
  struct net_device* DATARMNET413e8dcf7b = NULL;
  struct DATARMNET758277d429* aps_cb;
  struct DATARMNETc4743b996e* DATARMNET81b03d6be4;
  int DATARMNETb14e52a504 = -EINVAL;
  DATARMNET112d724eff(
      "\x61\x70\x73\x3a\x20\x25\x73"
      "\n",
      __func__);
  if (!DATARMNET54338da2ff) return -EINVAL;
  DATARMNET9c5e00ef03 = DATARMNET54338da2ff->attrs[DATARMNET7edfedec7f];
  if (!DATARMNET9c5e00ef03) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x61\x74\x74\x72\x73"
        "\n");
    return -EINVAL;
  }
  if (nla_memcpy(&DATARMNETddcafd8b91, DATARMNET9c5e00ef03,
                 sizeof(DATARMNETddcafd8b91)) <= (0xd2d + 202 - 0xdf7)) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x6e\x6c\x61\x5f\x6d\x65\x6d\x63\x70\x79\x20\x66"
        "\x61\x69\x6c\x65\x64"
        "\n");
    return -EINVAL;
  }
  mutex_lock(&DATARMNETd7b5a80f84);
  if (!DATARMNET54b95e4416) goto DATARMNETbf4095f79e;
  if (DATARMNETddcafd8b91.ifindex)
    DATARMNET413e8dcf7b =
        dev_get_by_index(&init_net, DATARMNETddcafd8b91.ifindex);
  if (!DATARMNET413e8dcf7b) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x64\x65\x76\x20\x66\x6f\x72\x20\x69"
        "\x66\x69\x6e\x64\x65\x78\x20\x25\x75"
        "\n",
        DATARMNETddcafd8b91.ifindex);
    goto DATARMNETbf4095f79e;
  }
  if (!DATARMNET4e81d27dfb(DATARMNET413e8dcf7b)) {
    dev_put(DATARMNET413e8dcf7b);
    goto DATARMNETbf4095f79e;
  }
  switch (DATARMNETddcafd8b91.cmd) {
    case DATARMNETd0bce1573e:
      aps_cb = DATARMNETe1c7654a2e(DATARMNET413e8dcf7b);
      DATARMNET81b03d6be4 = rcu_dereference(aps_cb->DATARMNETac8d594fb6);
      if (DATARMNET81b03d6be4)
        DATARMNETb14e52a504 = DATARMNET9e18f3d501(
            &DATARMNET81b03d6be4->DATARMNET46c1c4375f, &DATARMNETddcafd8b91);
      else
        DATARMNET112d724eff(
            "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x66\x6c\x6f\x77\x20\x6c\x69\x73"
            "\x74"
            "\n");
      break;
    default:
      break;
  }
  dev_put(DATARMNET413e8dcf7b);
DATARMNETbf4095f79e:
  mutex_unlock(&DATARMNETd7b5a80f84);
  DATARMNETa13fcf9070.cmd = DATARMNETddcafd8b91.cmd;
  DATARMNETa13fcf9070.DATARMNETe65883bfce = DATARMNETb14e52a504;
  DATARMNETa13fcf9070.DATARMNETbb588401ec =
      DATARMNETddcafd8b91.DATARMNETbb588401ec;
  DATARMNETb14e52a504 = DATARMNETbd1d5c8f28(
      DATARMNET54338da2ff, DATARMNET97eefd45e3, DATARMNETd2b1517d6b,
      sizeof(DATARMNETa13fcf9070), &DATARMNETa13fcf9070, GFP_KERNEL);
  return DATARMNETb14e52a504;
}
static ktime_t DATARMNETe7a1ab1dab;
int DATARMNET1998d09852(struct sk_buff* DATARMNETaafc1d9519,
                        struct genl_info* DATARMNET54338da2ff) {
  struct nlattr* DATARMNET9c5e00ef03;
  struct DATARMNET797a5b1493 DATARMNETddcafd8b91;
  struct DATARMNET9a727f81bc DATARMNETa13fcf9070;
  struct net_device* DATARMNET413e8dcf7b;
  struct DATARMNET758277d429* aps_cb;
  int DATARMNETb14e52a504;
  DATARMNET112d724eff(
      "\x61\x70\x73\x3a\x20\x25\x73"
      "\n",
      __func__);
  if (!DATARMNET54338da2ff) return -EINVAL;
  DATARMNET9c5e00ef03 = DATARMNET54338da2ff->attrs[DATARMNET572e4a28eb];
  if (!DATARMNET9c5e00ef03) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x6e\x6f\x20\x61\x74\x74\x72\x73"
        "\n");
    return -EINVAL;
  }
  if (nla_memcpy(&DATARMNETddcafd8b91, DATARMNET9c5e00ef03,
                 sizeof(DATARMNETddcafd8b91)) <= (0xd2d + 202 - 0xdf7)) {
    DATARMNET112d724eff(
        "\x61\x70\x73\x3a\x20\x6e\x6c\x61\x5f\x6d\x65\x6d\x63\x70\x79\x20\x66"
        "\x61\x69\x6c\x65\x64"
        "\n");
    return -EINVAL;
  }
  DATARMNET112d724eff(
      "\x61\x70\x73\x3a\x20\x69\x66\x69\x6e\x64\x65\x78\x20\x25\x75\x20\x65\x78"
      "\x70\x69\x72\x65\x5f\x6d\x73\x20\x25\x75"
      "\n",
      DATARMNETddcafd8b91.ifindex, DATARMNETddcafd8b91.DATARMNETc277c62678);
  if (DATARMNETddcafd8b91.DATARMNETc277c62678) {
    ktime_t DATARMNET35f4c14174 =
        ms_to_ktime(DATARMNETddcafd8b91.DATARMNETc277c62678);
    if (DATARMNETe7a1ab1dab != DATARMNET35f4c14174)
      DATARMNETe7a1ab1dab = DATARMNET35f4c14174;
  }
  DATARMNET413e8dcf7b =
      dev_get_by_index(&init_net, DATARMNETddcafd8b91.ifindex);
  if (DATARMNET413e8dcf7b) {
    if (DATARMNET4e81d27dfb(DATARMNET413e8dcf7b)) {
      aps_cb = DATARMNETe1c7654a2e(DATARMNET413e8dcf7b);
      aps_cb->DATARMNET91119c34ed = DATARMNETddcafd8b91.DATARMNETc277c62678
                                        ? (0xd26 + 209 - 0xdf6)
                                        : (0xd2d + 202 - 0xdf7);
    }
    dev_put(DATARMNET413e8dcf7b);
  }
  memset(&DATARMNETa13fcf9070, (0xd2d + 202 - 0xdf7),
         sizeof(DATARMNETa13fcf9070));
  DATARMNETa13fcf9070.ifindex = DATARMNETddcafd8b91.ifindex;
  DATARMNETb14e52a504 = DATARMNETbd1d5c8f28(
      DATARMNET54338da2ff, DATARMNET4f09ad7688, DATARMNETe54d857ffe,
      sizeof(DATARMNETa13fcf9070), &DATARMNETa13fcf9070, GFP_KERNEL);
  return DATARMNETb14e52a504;
}
static void DATARMNETe0c7b9d5a4(struct net_device* DATARMNET413e8dcf7b,
                                struct sk_buff* DATARMNET543491eb0f) {
  struct DATARMNET758277d429* aps_cb = DATARMNETe1c7654a2e(DATARMNET413e8dcf7b);
  if (aps_cb->DATARMNET91119c34ed)
    skb_hwtstamps(DATARMNET543491eb0f)->hwtstamp = ktime_get_boottime();
  else
    skb_hwtstamps(DATARMNET543491eb0f)->hwtstamp = (0xd2d + 202 - 0xdf7);
  if (READ_ONCE(DATARMNETfef55eaf9a))
    DATARMNET30dd480cad(DATARMNET413e8dcf7b, DATARMNET543491eb0f);
}
static int DATARMNET6ab4bbdaf4(struct net_device* DATARMNET413e8dcf7b,
                               struct sk_buff* DATARMNET543491eb0f) {
  struct DATARMNET758277d429* aps_cb = DATARMNETe1c7654a2e(DATARMNET413e8dcf7b);
  ktime_t DATARMNET912d2a7edd;
  if (aps_cb->DATARMNET91119c34ed &&
      skb_hwtstamps(DATARMNET543491eb0f)->hwtstamp && DATARMNETe7a1ab1dab) {
    DATARMNET912d2a7edd = ktime_get_boottime();
    if (ktime_sub(DATARMNET912d2a7edd,
                  skb_hwtstamps(DATARMNET543491eb0f)->hwtstamp) >
        DATARMNETe7a1ab1dab)
      return -ETIMEDOUT;
  }
  return (0xd2d + 202 - 0xdf7);
}
static const struct rmnet_module_hook_register_info DATARMNET509284caa6[] = {
    {
        .hooknum = RMNET_MODULE_HOOK_APS_PRE_QUEUE,
        .func = DATARMNETe0c7b9d5a4,
    },
    {
        .hooknum = RMNET_MODULE_HOOK_APS_POST_QUEUE,
        .func = DATARMNET6ab4bbdaf4,
    },
};
static int __init DATARMNET0718a3fa4c(void) {
  int DATARMNETb14e52a504;
  pr_info(
      "\x61\x70\x73\x3a\x20\x69\x6e\x69\x74\x20\x28\x25\x73\x29"
      "\n",
      DATARMNETe5ef0e617c);
  DATARMNETb14e52a504 = DATARMNETcfa8d492f8();
  if (DATARMNETb14e52a504) {
    pr_err(
        "\x61\x70\x73\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x72\x65"
        "\x67\x69\x73\x74\x65\x72\x20\x67\x65\x6e\x6c\x20\x66\x61\x6d\x69\x6c"
        "\x79"
        "\n");
    return DATARMNETb14e52a504;
  }
  register_netdevice_notifier(&DATARMNETc580548769);
  rcu_assign_pointer(rmnet_aps_pre_queue, DATARMNETe0c7b9d5a4);
  rcu_assign_pointer(rmnet_aps_post_queue, DATARMNET6ab4bbdaf4);
  rmnet_module_hook_register(DATARMNET509284caa6,
                             ARRAY_SIZE(DATARMNET509284caa6));
  mutex_lock(&DATARMNETd7b5a80f84);
  DATARMNET54b95e4416 = true;
  mutex_unlock(&DATARMNETd7b5a80f84);
  return (0xd2d + 202 - 0xdf7);
}
static void __exit DATARMNETff67054ba9(void) {
  rcu_assign_pointer(rmnet_aps_pre_queue, NULL);
  rcu_assign_pointer(rmnet_aps_post_queue, NULL);
  rmnet_module_hook_unregister(DATARMNET509284caa6,
                               ARRAY_SIZE(DATARMNET509284caa6));
  mutex_lock(&DATARMNETd7b5a80f84);
  DATARMNET54b95e4416 = false;
  DATARMNET9ac8a34003();
  mutex_unlock(&DATARMNETd7b5a80f84);
  DATARMNET446f780f19((0xd2d + 202 - 0xdf7), DATARMNET94016043b8);
  cancel_delayed_work_sync(&DATARMNET3481998252);
  del_timer_sync(&DATARMNETd21629e047);
  cancel_work_sync(&DATARMNET8e3aef0760);
  unregister_netdevice_notifier(&DATARMNETc580548769);
  DATARMNETca7606cfd1();
  DATARMNET112d724eff(
      "\x61\x70\x73\x3a\x20\x65\x78\x69\x74"
      "\n");
}
MODULE_LICENSE("\x47\x50\x4c\x20\x76\x32");
module_init(DATARMNET0718a3fa4c);
module_exit(DATARMNETff67054ba9);
