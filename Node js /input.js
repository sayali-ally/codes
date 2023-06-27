how to get command line input in Node.js:

// Example usage: node script.js Hello, World!

// Accessing command line arguments
const args = process.argv.slice(2);

// Displaying command line input
console.log('Command line input:', args);

// Accessing individual arguments
if (args.length > 0) {
  const firstArgument = args[0];
  console.log('First argument:', firstArgument);
}

