#pragma once

// Dependencies:
//   - <iostream>
//   - <queue>

namespace Eve
{
	namespace File
	{
		// out `fileContent`	(in string `filePath, in bool `isFileBinaryReadable`)
		// `isFileBinaryReadable` should only be true if the file is certified header/metadata/specific ASCII characters-free.
		char	*getContent(char const *, bool = false);
	}
}
