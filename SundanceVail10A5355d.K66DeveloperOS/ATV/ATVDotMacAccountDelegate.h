/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacAccountDelegate : ATVDotMacParserDelegate {
	NSArray *_albumOrder;	// 24 = 0x18
	NSArray *_videoOrder;	// 28 = 0x1c
	NSArray *_slideshowOrder;	// 32 = 0x20
	NSDate *_modDate;	// 36 = 0x24
	NSDictionary *_startSelectors;	// 40 = 0x28
	NSDictionary *_endSelectors;	// 44 = 0x2c
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x180f99; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x181c65; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x180f89; converted property
- (id)init;	// 0x180215
- (void)__atv_end_dotmac_iMovieUserOrder;	// 0x1808fd
- (void)__atv_end_dotmac_keyImagePath;	// 0x180c49
- (void)__atv_end_dotmac_posterPath;	// 0x180dc9
- (void)__atv_end_dotmac_redacted;	// 0x180cc9
- (void)__atv_end_dotmac_title;	// 0x180b41
- (void)__atv_end_dotmac_type;	// 0x180b01
- (void)__atv_end_dotmac_userHidden;	// 0x180d49
- (void)__atv_end_dotmac_useritemguid;	// 0x180d89
- (void)__atv_end_dotmac_userorder;	// 0x1807f5
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x180f49
- (void)__atv_end_dotmac_videoDurationMed;	// 0x180ec9
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x180e49
- (void)__atv_end_dotmac_videoPathLrg;	// 0x180f09
- (void)__atv_end_dotmac_videoPathMed;	// 0x180e89
- (void)__atv_end_dotmac_videoPathSmall;	// 0x180e09
- (void)__atv_end_dotmac_viewIdentifier;	// 0x180ac1
- (void)__atv_end_dotmac_webImagePath;	// 0x180c89
- (void)__atv_end_iphoto_userHidden;	// 0x180d09
- (void)__atv_end_slideshowUserOrder;	// 0x180a05
- (void)__atv_end_title;	// 0x180a81
- (void)__atv_end_updated;	// 0x180bd1
- (void)__atv_start_link:(id)link;	// 0x180b81
- (id)_publicMedia;	// 0x181e01
- (void)_updateEntriesWithDateTaken:(id)dateTaken withType:(id)type;	// 0x181d29
- (void)dealloc;	// 0x180741
- (id)displayName;	// 0x181c75
// converted property getter: - (id)endSelectors;	// 0x180f99
- (id)listOfAlbumInfos;	// 0x181031
- (id)listOfAlbumInfosAlphabetically;	// 0x1811e1
- (id)listOfAlbumInfosUserSort;	// 0x1812b5
- (id)listOfVideoInfos;	// 0x181341
- (id)listOfVideoInfosAlphabetically;	// 0x181595
- (id)listOfVideoInfosUserSort;	// 0x181669
- (id)mediaUserSort;	// 0x180fa9
// converted property getter: - (id)modDate;	// 0x181c65
- (id)mostRecentAlbumInfo;	// 0x181a81
- (id)slideshowInfos;	// 0x1816f5
- (id)slideshowInfosAlphabetically;	// 0x181921
- (id)slideshowInfosUserSort;	// 0x1819f5
// converted property getter: - (id)startSelectors;	// 0x180f89
@end
