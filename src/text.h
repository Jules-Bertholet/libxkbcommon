/*
 * Copyright © 2009 Dan Nicholson
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef TEXT_H
#define TEXT_H

typedef struct {
    const char *name;
    unsigned int value;
} LookupEntry;

bool
LookupString(const LookupEntry tab[], const char *string,
              unsigned int *value_rtrn);

const char *
LookupValue(const LookupEntry tab[], unsigned int value);

extern const LookupEntry ctrlMaskNames[];
extern const LookupEntry modComponentMaskNames[];
extern const LookupEntry groupComponentMaskNames[];
extern const LookupEntry groupMaskNames[];
extern const LookupEntry groupNames[];
extern const LookupEntry levelNames[];
extern const LookupEntry buttonNames[];
extern const LookupEntry useModMapValueNames[];
extern const LookupEntry actionTypeNames[];
extern const LookupEntry symInterpretMatchMaskNames[];

const char *
VModMaskText(struct xkb_keymap *keymap, xkb_mod_mask_t cmask);

xkb_mod_index_t
ModNameToIndex(const char *name);

const char *
ModIndexToName(xkb_mod_index_t ndx);

const char *
ModIndexText(xkb_mod_index_t ndx);

const char *
ModMaskText(xkb_mod_mask_t mask);

const char *
ActionTypeText(unsigned type);

const char *
KeysymText(xkb_keysym_t sym);

const char *
KeyNameText(const char name[XKB_KEY_NAME_LENGTH]);

const char *
SIMatchText(unsigned type);

#endif /* TEXT_H */
