/* SPDX-License-Identifier: BSD-2-Clause */
/* Copyright (c) 2021 Facebook */
#ifndef __ADDR2LINE_H
#define __ADDR2LINE_H

struct a2l_resp
{
	char fname[128];
	char line[512];
};

struct addr2line;

struct addr2line *addr2line__init(const char *vmlinux, bool inlines);
void addr2line__free(struct addr2line *a2l);

int addr2line__symbolize(const struct addr2line *a2l, long addr, struct a2l_resp *resp);

#endif /* __ADDR2LINE_H */
