/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSUserDefaults.h> // Unknown library


@interface NSUserDefaults (NSKeyValueCoding)
- (void)setValue:(id)value forKey:(id)key;	// 0x3105e579
- (id)valueForKey:(id)key;	// 0x31025641
@end

@interface NSUserDefaults (NSUserDefaults)
@property(retain) id searchList;	// G=0x31087aed; S=0x31087ac9; converted property
+ (void)resetStandardUserDefaults;	// 0x310880d5
+ (void)setStandardUserDefaults:(id)defaults;	// 0x3108806d
+ (id)standardUserDefaults;	// 0x30ff7c79
- (id)init;	// 0x31087929
- (id)initWithUser:(id)user;	// 0x31014add
- (id)URLForKey:(id)key;	// 0x31087d15
- (void)_adjustTimer:(id)timer;	// 0x3100f441
- (void)_adjustTimerForAutosync;	// 0x3100524d
- (void)addSuiteNamed:(id)named;	// 0x31087ddd
- (id)arrayForKey:(id)key;	// 0x31087a75
- (BOOL)boolForKey:(id)key;	// 0x30ff7e19
- (id)dataForKey:(id)key;	// 0x31087a15
- (void)dealloc;	// 0x31087e0d
- (id)dictionaryForKey:(id)key;	// 0x31087a45
- (id)dictionaryRepresentation;	// 0x31088229
- (double)doubleForKey:(id)key;	// 0x3102e56d
- (float)floatForKey:(id)key;	// 0x3102ab95
- (int)integerForKey:(id)key;	// 0x3101a59d
- (long long)longForKey:(id)key;	// 0x31087c71
- (id)objectForKey:(id)key;	// 0x30ff7f0d
- (id)objectForKey:(id)key inDomain:(id)domain;	// 0x31088141
- (BOOL)objectIsForcedForKey:(id)key;	// 0x31088051
- (BOOL)objectIsForcedForKey:(id)key inDomain:(id)domain;	// 0x31088041
- (id)persistentDomainForName:(id)name;	// 0x3103652d
- (id)persistentDomainNames;	// 0x31088289
- (void)registerDefaults:(id)defaults;	// 0x3101a93d
- (void)removeObjectForKey:(id)key;	// 0x31004f21
- (void)removeObjectForKey:(id)key inDomain:(id)domain;	// 0x31087aa5
- (void)removePersistentDomainForName:(id)name;	// 0x31087911
- (void)removeSuiteNamed:(id)named;	// 0x31087df5
- (void)removeVolatileDomainForName:(id)name;	// 0x31087eb5
// converted property getter: - (id)searchList;	// 0x31087aed
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x31005349
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x3102e5c5
- (void)setFloat:(float)aFloat forKey:(id)key;	// 0x3102e5f9
- (void)setInteger:(int)integer forKey:(id)key;	// 0x3102e631
- (void)setLong:(long long)aLong forKey:(id)key;	// 0x310879e1
- (void)setObject:(id)object forKey:(id)key;	// 0x31004f79
- (void)setObject:(id)object forKey:(id)key inDomain:(id)domain;	// 0x31087b15
- (void)setPersistentDomain:(id)domain forName:(id)name;	// 0x31087f01
// converted property setter: - (void)setSearchList:(id)list;	// 0x31087ac9
- (void)setURL:(id)url forKey:(id)key;	// 0x31087941
- (void)setVolatileDomain:(id)domain forName:(id)name;	// 0x31087e69
- (id)stringArrayForKey:(id)key;	// 0x31025329
- (id)stringForKey:(id)key;	// 0x3102ab41
- (BOOL)synchronize;	// 0x3100f2f9
- (id)volatileDomainForName:(id)name;	// 0x31088269
- (id)volatileDomainNames;	// 0x31088249
@end

@interface NSUserDefaults (NSUserDefaults_NSURLExtras)
+ (void)_ensureAndLockPreferredLanguageLock;	// 0x31096a81
+ (void)_web_addDefaultsChangeObserver;	// 0x310967f1
+ (void)_web_defaultsDidChange;	// 0x31096a25
+ (id)_web_preferredLanguageCode;	// 0x31096855
@end

