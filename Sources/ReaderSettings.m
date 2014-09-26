//
//  ReaderSettings.m
//  Reader v2.6.0
//
//  Created by Felipe Lobo on 29/05/13.
//	Copyright © 2013 Flip Studio. All rights reserved.
//

#import "ReaderSettings.h"

@implementation ReaderSettings

+ (ReaderSettings *)defaultSettings
{
	ReaderSettings *settings = [[ReaderSettings alloc] init];
	
	settings.flatUI = YES;
	settings.bookmarking = YES;
	settings.mailEnabled = YES;
	settings.thumbsEnabled = YES;
	settings.previewEnabled = YES;
	settings.retinaDisabled = NO;
	settings.idleTimeDisabled = NO;
	settings.showShadows = YES;
	settings.standalone = NO;
	settings.showMainPagebar = YES;
	settings.showMainToolbar = YES;
	
	return settings;
}

@end
