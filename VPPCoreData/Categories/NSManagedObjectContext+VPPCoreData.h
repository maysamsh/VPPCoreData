//
//  NSManagedObjectContext+VPPCoreData.h
//  Wiktionary
//
//  Created by Víctor on 28/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "VPPCoreDataActiveRecordProtocol.h"


@interface NSManagedObjectContext (VPPCoreData) <VPPCoreDataActiveRecordManagedObjectContext>

@end
