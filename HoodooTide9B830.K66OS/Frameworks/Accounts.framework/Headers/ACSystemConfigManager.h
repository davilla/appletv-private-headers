/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import "Accounts-Structs.h"
#import <NSObject.h> // Unknown library


@interface ACSystemConfigManager : NSObject {
	void *_prefs;	// 4 = 0x4
	BOOL _notifyForExternalChangeOnly;	// 8 = 0x8
	int _applySkipCount;	// 12 = 0xc
}
- (id)init;	// 0x36e6837d
- (int)accountsWithAccountTypeIdentifierExist:(id)accountTypeIdentifierExist;	// 0x36e68439
- (void)dealloc;	// 0x36e683cd
- (void *)getValueForKey:(id)key;	// 0x36e68665
- (void)initializeSCPrefs:(id)prefs;	// 0x36e68515
- (void)notifyTarget:(unsigned)target;	// 0x36e68601
- (void)refresh;	// 0x36e68505
- (void)setAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier exist:(BOOL)exist;	// 0x36e68491
- (void)setCallback:(/*function-pointer*/ void *)callback withContext:(XXStruct_K1psTC *)context;	// 0x36e68741
- (void)setValue:(void *)value forKey:(id)key;	// 0x36e68679
- (void)synchronize;	// 0x36e68651
@end

